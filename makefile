CC=gcc
CFLAGS= -O4 -Wall -pedantic -std=c99 -I.
TEST_TARGET=bin/tests

lifemake: src/gameoflife.o src/utils.o src/main.o
	$(CC) -o bin/life src/gameoflife.o src/utils.o src/main.o -I.

tests: src/utils.o src/gameoflife.o src/gameoflifeTest.o  src/utilsTest.o src/mainTest.o
	$(CC) -o $(TEST_TARGET) $(CFLAGS) src/utils.o src/gameoflife.o src/gameoflifeTest.o src/utilsTest.o src/mainTest.o

clean:
	rm -f $(TEST_TARGET)

