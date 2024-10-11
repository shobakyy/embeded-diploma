CC= arm-none-eabi-
CFLAGS=  -mcpu=cortex-m3 -gdwarf-2
INCS=-I
LIBS=
SRC=$(wildcard *.c)
OBJ=$(SRC:.c=.o)
AS=$(wildcard *.s)
ASOBJ=$(AS:.s=.o)


all:lern-in-depth_cortexM4.hex
	@echo "build is done"
%.o: %.s 
	$(CC)gcc.exe -c   $(INCS)  $(CFLAGS) $< -o $@

%.o: %.c 
	$(CC)gcc.exe -c  $(INCS) $(CFLAGS) $< -o $@

lern-in-depth.elf:  $(ASOBJ) $(OBJ)
	$(CC)ld.exe -T linker_script.ld $(LIBS) $(ASOBJ) $(OBJ)  -o $@ -Map=Map_file.map

lern-in-depth_cortexM4.hex : lern-in-depth.elf
	$(CC)objcopy.exe -O binary $<  $@

clean_all:
	rm *.o *.elf *.bin

clean:
	rm *.elf *.bin
	