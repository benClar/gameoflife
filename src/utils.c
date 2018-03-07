#include "utils.h"

int getLength(char *arr){
	int i;
	for(i = 0; arr[i] != '\0'; i++){}

	return i;
}

int power(int base, int exp) {
	if(exp == 0){
		return 1;
	}
	int result, i;
	for(i = 1, result = base; i < exp; i++, result*=base){}

	return result;
}

int *strToInt(char *input){
	int i, multiplier, p;
	int *result = (int*) malloc(sizeof(int));
	for(i = getLength(input) - 1, *result = 0, p=0; i>=0; i--,p++) {
		multiplier = power(10, p);
		int *r = charToInt(input[i]);
		if(r == NULL){
			return NULL;
		}
		*result += *r * multiplier;
	}

	return result;
}

int *charToInt(char c){
	int *i =  malloc(sizeof(int));

	*i = c - '0';

	if(( 9 - *i ) >= 0) {
		return i;
	}

	return NULL;
}

