#include "gameoflife.h"


struct board {
	Square **grid;	
};


Board* createBoard(int length, int width){
	Board *b = (Board*) malloc(sizeof(Board));
	b->grid = (Square**) malloc(length * sizeof(Square*));
	int l, w;
	for(l = 0; l < length; l++) {
		b->grid[l] = (Square*) malloc(width * sizeof(Square));
		for(w = 0; w < width; w++) {
			b->grid[l][w] = DEAD;
		}
	}
	return b;
}

int main(int argc, char **argv) {

	return 0;
}
