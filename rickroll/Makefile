obj-m += rick.o

all:
	bash check.sh
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules

clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean

install:
	mkdir -p /lib/modules/$(shell uname -r)/kernel/drivers/extra
	cp rick.ko /lib/modules/$(shell uname -r)/kernel/drivers/extra/
	depmod

novid:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules
