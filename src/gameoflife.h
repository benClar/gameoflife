#include <stdio.h>
#include "utils.h"

typedef enum square { ALIVE, DEAD } Square;

typedef struct board Board;
Board* createBoard(int length, int width);
Square getSquare(Board *b, int length, int width);
