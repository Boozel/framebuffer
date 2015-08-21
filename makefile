CC = gcc
CFLAGS = -Wall -Wextra

##########

all: framebuffer framebuffer.exe clean

##########

framebuffer: framebuffer.c
	gcc -o framebuffer framebuffer.c

framebuffer.exe: framebuffer.o
	i586-mingw32msvc-gcc -o framebuffer.exe framebuffer.c

##########

clean:
	rm -f *.o
