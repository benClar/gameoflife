#include "gameoflifeTest.h"



void testGetBoard() {
	int width = 10, length = 10;
	Board *b = createBoard(length, width);
	for(int l = 0; l < 10; l++){
		for(int w = 0; w < 10; w++){
			sput_fail_unless(getSquare(b, l, w) == DEAD, "init square is dead");
		}
	}		
}

int gameoflifeTest(){

    sput_start_testing();
	sput_enter_suite("testing gameoflife");
	sput_run_test(testGetBoard);
	sput_finish_testing();
	return 0;
}
