CC = gcc
CFLAGS = -Wall -O2 -ffreestanding
LDFLAGS = -T link.ld

all: kernel/user kernel/lib9

kernel/user: kernel/main.c
	$(CC) $(CFLAGS) -c $< -o $@

kernel/lib9: lib9/9p.h
	@echo "Lib9 headers ready"

clean:
	rm -f kernel/user kernel/lib9

.PHONY: all clean