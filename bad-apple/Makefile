obj-m += badapple.o

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules
	bash main.sh

clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean

novid:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules
