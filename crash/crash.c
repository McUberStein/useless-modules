#include <linux/module.h>	
#include <linux/kernel.h>	
#define DRIVER_AUTHOR "McUberStein"
#define DRIVER_DESC  "A primitive module that crashes the Linux kernel"

MODULE_LICENSE("GPL");
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);

int init_module(void)
{
	printk(KERN_INFO "Crashing... \n");
	char *argv[] = { "/bin/bash", "-c", "/bin/echo c > /proc/sysrq-trigger", NULL}; 
	static char* envp[] = { "HOME=/",  "TERM=linux",   "PATH=/sbin:/bin:/usr/sbin:/usr/bin", NULL };
	call_usermodehelper(argv[0], argv, envp, UMH_WAIT_EXEC);
	return 0;
}

void cleanup_module(void)
{
	printk(KERN_INFO "Crashing failed and module unloaded \n");
}
