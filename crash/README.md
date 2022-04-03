# Crash
A very simple kernel module that crashes the Linux kernel by simply writing 'c' to the file /proc/sysrq-trigger. I recommend to only use it in a VM.

# Build
As with any other kernel module, requires you to have the Linux kernel headers installed. Then simply switch to this directory and run `make`. To load module run `insmod crash.ko` as root.
