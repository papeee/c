// c-input.c : 
// Pasi Rautiainen C - input / output program

#include <stdio.h>

int main() {

	char string[50];
	printf("Type something.. :");
	gets_s(string, 50); //gets-function is older and not safe to use
	printf("\n You typed: ");
	puts(string);
	return 0;
}
