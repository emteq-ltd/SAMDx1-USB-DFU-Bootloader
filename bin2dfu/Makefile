BIN2DFU_C = bin2dfu.c

CC?=gcc

CFLAGS+= -g -O1

CFLAGS = /Zi
LDFLAGS = /debug:full

all: bin2dfu$(EXE_SUFFIX)

bin2dfu$(EXE_SUFFIX): Makefile $(BIN2DFU_C)
	$(CC) $(BIN2DFU_C) -o $@ $(CFLAGS)
	

clean:
	rm -f bin2dfu$(EXE_SUFFIX)
