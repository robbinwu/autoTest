#!/usr/bin/python
from auto_test_uart import *

sys.path.append(os.sep.join([os.curdir,"tool","autoPlatform","jtag_api"]))
from jtag_api import *

def autoTest_uart(t32api,autoTest_obj,uart):
	fname = autoTest_obj.cmm_fn
	uart.reset_log_file(autoTest_obj.test_log_dir)
	jtag_stop_it(t32api)
	wait_time = do_t32command_do_cmm(t32api, fname)
	wait_time = 20
	print "wait script stop running"
	case_timeout = eval('+'.join(autoTest_obj.test_timeout_list))
	print "wait time: %.1fs"%(wait_time+float(case_timeout))
	msgtype=c_ulonglong(0)
	test_result = []
	for timming in xrange(int(wait_time)):
		t32api.T32_GetPracticeState(byref(msgtype))
		if msgtype.value == 0:
			break
		else:
			sys.stdout.write("timing: %ds\r" %int(timming))
			sys.stdout.flush()
			time.sleep(1)
	print 'script has stoped'
	for cmd_string,timeout in zip(autoTest_obj.test_cmd_list,autoTest_obj.test_timeout_list):
		uart.input(cmd_string)
		index,spend_time = uart.expect(["ctest#"],int(timeout) + wait_time)
		if uart.result_log:
			test_result.extend(uart.result_log)
		else:
			test_result.append('No_result_log')
	autoTest_obj.set_test_result(test_result)
	uart.save_log_file()
	print 'wait total time: %ds'%timming
	print 'input cmd:',autoTest_obj.test_cmd_list
	print 'test result:',test_result
	print 'case test done!\n'

def autoTest(t32api,autoTest_obj):
	docmm_timeout = 15
	fname = autoTest_obj.cmm_fn
	jtag_stop_it(t32api)
	do_t32command_do_cmm(t32api, fname)
	wait_time = docmm_timeout + eval('+'.join(autoTest_obj.test_timeout_list))
	print "wait script stop running"
	print "wait time: %.1fs"%wait_time
	msgtype=c_ulonglong(0)
	for timming in xrange(int(wait_time)):
		t32api.T32_GetPracticeState(byref(msgtype))
		if msgtype.value == 0:
			break
		else:
			sys.stdout.write("timing: %ds\r" %int(timming))
			sys.stdout.flush()
			time.sleep(1)
	print 'wait total time: %ds'%timming
	print 'script has stoped'

