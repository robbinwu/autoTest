#!/usr/bin/python

import platform,os,sys
from ctypes import *

api_obj = {"CVD":["CVDAPI.dll"],"T32":["t32api.dll","t32api64.dll","t32api.so","t32api64.so"]}
def get_config():
	import ConfigParser
	abs_dir = os.path.dirname(os.path.abspath(__file__))
	parent_dir = os.path.dirname(abs_dir)
	conf = ConfigParser.ConfigParser()
	cfgfile = os.path.join(parent_dir,'autoPlatform.cfg')
	assert os.path.exists(cfgfile),cfgfile+' no exists!'
	conf.read(cfgfile)
	config = {}
	for sec in conf.sections():
		for k,v in conf.items(sec):
			config[k] = v

	if (platform.system()=='Windows') or (platform.system()[0:6]=='CYGWIN'):
		if ctypes.sizeof(ctypes.c_voidp)==4:
			# WINDOWS 32bit
			if "T32" == config["jtag_TYPE"]:
				config['api_obj'] = os.path.join(abs_dir,"t32api.dll")
			else:
				print "CVD no 32bit version! Pls check config file"
				sys.exit(1)
		else:
			# WINDOWS 64bit
			if "T32" == config["jtag_TYPE"]:
				config['api_obj'] = os.path.join(abs_dir,"t32api.dll")
			else:
				config['api_obj'] = os.path.join(abs_dir,"CVDAPI.dll")
	else :
		if ctypes.sizeof(ctypes.c_voidp)==4:
			# Linux 32bit
			if "T32" == config["jtag_TYPE"]:
				config['api_obj'] = os.path.join(abs_dir,"t32api.so")
			else:
				print "CVD no linux version! Pls check config file"
				sys.exit(1)
		else:
			# Linux 64bit
			if "T32" == config["jtag_TYPE"]:
				config['api_obj'] = os.path.join(abs_dir,"t32api64.so")
			else:
				print "CVD no linux version! Pls check config file"
				sys.exit(1)
	return config

def jtat_connect():
	abs_dir = os.path.dirname(os.path.abspath(__file__))
	conf = get_config()

	t32api = ctypes.CDLL(conf['api_obj'])
	t32api.T32_Config(b"NODE=",conf.get('t32_IP'))
	t32api.T32_Config(b"PORT=",conf.get('t32_PORT'))
	t32api.T32_Config(b"PACKLEN=",conf.get('t32_PACKLEN'))

	if not t32api.T32_Init():
		print "T32_Init() return err\n\r"
		return False

	if not t32api.T32_Attach(1):
		print "attach return err"
		return False

	if not t32api.T32_Ping():
		print "please check the connection\n\r"
		return False

	return t32api

def connect_jtag():
	print "\n\rDo jtag command\n\r"
	jtat_connect_cnt = 0
	while 1:
		t32api = jtat_connect()
		jtat_connect_cnt += 1
		if t32api:
			break
		if jtat_connect_cnt == 5:
			print "Pls check your jtag t32\n\r"
			sys.exit(1)
	print 'jtat_connect success!'
	print "jtat_connect_cnt: %d"%jtat_connect_cnt
	return t32api

