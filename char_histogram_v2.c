#include <stdio.h>

int main() {


	/* Count total characters in input */
	int c, num_chars;
	num_chars = 0;

	while ( (c=getchar()) != ';' ) {
		num_chars++;
	}
	printf("num_chars: %3d \n", num_chars);

	while ( (c=getchar()) != ';' ) {
		putchar(c);
	}
}