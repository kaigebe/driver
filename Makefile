#!/bin/bash

obj-m += scull.o

KDIR :=/home/gek/disk/workspace/android4.4/kernel/iTop4412_Kernel_3.0

PWD ?= $(shell pwd)

all:
	make -C $(KDIR) M=$(PWD) modules
clean:
	rm -rf *.o *.ko *.mod.*

