obj-m += crash.o

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules

install:
	install:
	mkdir -p /lib/modules/$(shell uname -r)/kernel/drivers/extra
	cp crash.ko /lib/modules/$(shell uname -r)/kernel/drivers/extra/
	depmod
	
clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
