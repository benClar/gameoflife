#include "utilsTest.h"



void testPow(){
	sput_fail_unless(power(10,3) == 1000, "10^3 == 1000");
	sput_fail_unless(power(10,1) == 10, "10^3 == 1000");
}

void testCharToInt(){
	sput_fail_unless(*charToInt('1') == 1, "1 == 1");
	sput_fail_unless(*charToInt('9') == 9, "9 == 9");
	sput_fail_unless(*charToInt('0') == 0, "0 == 0");
	sput_fail_unless(charToInt('X') == NULL, "NaN");
}

void testStrToInt() {
	sput_fail_unless(*strToInt("9999") == 9999, "9999 == 9999");
	sput_fail_unless(*strToInt("0") == 0, "0 == 0");
	sput_fail_unless(*strToInt("1") == 1, "1 == 1");
	sput_fail_unless(*strToInt("12345678") == 12345678, "12345678 == 12345678");
}

void testGetLength() {
	char input[6] = {'h','e','l','l','o','\0'};
	sput_fail_unless(getLength(input) == 5, "array len is 5");	
	sput_fail_unless(getLength("hello") == 5, "array len is 5");	

}

int main(int argc, char *argv[]){

	sput_start_testing();
	sput_enter_suite("testing utils");
	sput_run_test(testPow);
	sput_run_test(testCharToInt);
	sput_run_test(testGetLength);
	sput_run_test(testStrToInt);
	sput_finish_testing();
	return sput_get_return_value();
}
