CC = gcc
CFLAGS = -Wall -Wextra

##########

all: framebuffer framebuffer.exe clean

##########

framebuffer: generateImg.c framebuffer.c
	gcc -o framebuffer generateImg.c framebuffer.c

framebuffer.exe: framebuffer.c generateImg.c
	i586-mingw32msvc-gcc -o framebuffer.exe framebuffer.c generateImg.c

##########

clean:
	rm -f *.o
