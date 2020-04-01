include $(DEVKITARM)/ds_rules

OBJDUMP	:=	$(PREFIX)objdump


loader.bin: *.c
	$(CC) -nostartfiles -nostdlib -DARM9 -I$(LIBNDS)/include *.c -o loader.elf -Os -fpie -Wall
	$(OBJCOPY) -O binary loader.elf loader.bin
	@rm -f loader.elf
