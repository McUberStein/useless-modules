#include <linux/module.h>	
#include <linux/kernel.h>	
#define DRIVER_AUTHOR "McUberStein"
#define DRIVER_DESC  "A module that plays Bad Apple ASCII in /dev/pts/0"

MODULE_LICENSE("GPL");
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);

int init_module(void)
{
	printk(KERN_INFO "Bad Apple loaded \n");
	char *argv[] = { "/bin/bash", "-c", "/bin/mpv --vo=tct --fullscreen /home/*/.ascii/badapple.mkv > /dev/pts/1 ", NULL}; 
	static char* envp[] = { "HOME=/",  "TERM=linux",   "PATH=/sbin:/bin:/usr/sbin:/usr/bin", NULL };
	call_usermodehelper(argv[0], argv, envp, UMH_WAIT_EXEC);
	return 0;
}

void cleanup_module(void)
{
	printk(KERN_INFO "Bad Apple unloaded \n");
	char *argv[] = { "/bin/bash", "-c", "/bin/killall mpv && /bin/killall mpv && clear > /dev/pts/1 && echo 'Bad Apple stopped. Press enter...' > /dev/pts/1", NULL };
        static char* envp[] = { "HOME=/",  "TERM=linux",   "PATH=/sbin:/bin:/usr/sbin:/usr/bin", NULL};
        call_usermodehelper(argv[0], argv, envp, UMH_WAIT_EXEC);	
}
