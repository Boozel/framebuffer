CC = gcc
CFLAGS = -Wall -Wextra -ggdb3 -O2
INCLUDE = -I/usr/include/GL -I/usr/include/GLFW
LIBS = -lGL -lGLU -lGLEW -lglfw
##########

all: framebuffer clean

##########

framebuffer: generateImg.c framebuffer.c oglwindow.c
	gcc  $(CFLAGS) -o framebuffer $(INCLUDE)  generateImg.c framebuffer.c oglwindow.c $(LIBS)

#framebuffer.exe: framebuffer.c generateImg.c
#	i586-mingw32msvc-gcc -o framebuffer.exe framebuffer.c generateImg.c

##########

clean:
	rm -f *.o
