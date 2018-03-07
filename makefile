CC=gcc
CFLAGS= -O4 -Wall -pedantic -std=c99 -I.
TEST_TARGET=bin/tests

lifemake: src/gameoflife.o src/utils.o
	$(CC) -o bin/life src/gameoflife.o src/utils.o -I.

tests: src/utils.o src/utilsTest.o
	$(CC) -o $(TEST_TARGET) $(CFLAGS) src/utils.o src/utilsTest.o 

clean:
	rm -f $(TEST_TARGET)

