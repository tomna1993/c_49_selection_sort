CC := gcc
#CFLAGS := 
DEST := ./build/

all: selection_sort.c
	mkdir -p build
	$(CC) selection_sort.c -lcs50 -o $(DEST)/selection_sort 