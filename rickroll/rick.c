#include <linux/module.h>	
#include <linux/kernel.h>	
#include <linux/tty.h>
#include <linux/kmod.h>
#include "rick.h"

#define DRIVER_AUTHOR "McUberStein"
#define DRIVER_DESC  "A module that just about forces the current user to watch Never Gonna Give You Up"

MODULE_LICENSE("GPL");
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);

int init_module(void)
{
	printk(KERN_INFO "Rick loaded \n");
	deny();
	rickPlay();
	return 0;
}



void cleanup_module(void)
{
	printk(KERN_INFO "Rick unloaded \n");
	rickClean();
	allow();
}





















