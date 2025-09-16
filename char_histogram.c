#include <stdio.h>

#define COUNTED 1
#define UNCOUNTED 0

int main() {

	/* Declare variables */
	int c, uniqueChars, i, j, c_state;
	int histogram[uniqueChars];
	int charSpecimen[uniqueChars];
	
	/* Init vars */
	c = uniqueChars = 0;
	c_state = UNCOUNTED;

	/* Check whether current char is duplicate of anything seen before in input */
	while ( (c=getchar()) != ';' ) {
		c_state = UNCOUNTED;
		for (i = 0; i < uniqueChars; i++) {
			if (c == charSpecimen[i]) {
				histogram[i]++;
				c_state = COUNTED;
			}
		}
		if (c_state == UNCOUNTED) {
			uniqueChars++;
			histogram[uniqueChars-1]++;
			charSpecimen[uniqueChars-1] = c;
		}
	}

	/* Print histogram */
	for (i = 0; i < uniqueChars; i++) {
		putchar(charSpecimen[i]);
		// for (j = 0; j < histogram[i]; j++)
		// 	printf("#");
		printf("\n");
	}
	// printf("uniqueChars: %d\n", uniqueChars);
	// printf("charSpecimen[0]: %d\n", charSpecimen[0]);
	// printf("charSpecimen[1]: %d\n", charSpecimen[1]);
	// printf("histogram[0]: %d\n", histogram[0]);
}