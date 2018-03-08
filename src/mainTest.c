#include "mainTest.h"

int main(int argc, char* argv[]){

        sput_start_testing();
		gameoflifeTest();
		utilsTest();
        sput_finish_testing();
        return sput_get_return_value();
}
