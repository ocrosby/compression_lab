CC = gcc
CFLAGS = -Wall -g

.PHONY: all clean

all: huff

huff: main.c huffman.c
	gcc -o a.out main.c huffman.c tree.c

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

test-tree: tree.c tests/test-tree.c tree.o
	$(CC) $(CFLAGS) -I. -o tests/test-tree tests/test-tree.c tree.o
	./tests/test-tree

clean:
	rm -f a.out
	rm -f *.o
	rm -f tests/test-tree
	rm -f tests/test-huffman
	rm -rf tests/*.dSYM