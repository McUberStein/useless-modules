obj-m += rick.o

all:
	bash check.sh
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules

clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean

novid:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules
