obj-m += badapple.o

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules
	bash main.sh

install:
	mkdir -p /lib/modules/$(shell uname -r)/kernel/drivers/extra
	cp badapple.ko /lib/modules/$(shell uname -r)/kernel/drivers/extra/
	depmod

novid:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules

clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
