.SUFFIXES: .c .cpp

CC=gcc
GCC=g++

.c:
	$(CC) -I$(INCDIR) $(CFLAGS) $< $(GL_LIBS) -o $@

.cpp:
	$(GCC) -Wall -Wunused -std=c++11 -O2 `pkg-config --cflags opencv4` -fdiagnostics-color=always -g $< -o $@ `pkg-config --libs opencv4`

clean:
	rm -f hello pixels negativo