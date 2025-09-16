#include <stdio.h>

/* Define constants */
#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */
#define LONGEST_WORD 32 /* longest word that is realistically expected */

int main() {
	
	/* Declare variables */
	int c, nw, state;
	int wordLength, barLength;
	int histogram[LONGEST_WORD];
	int i,j;

	/* Init variables */
	c = nw = wordLength = barLength = 0;
	i = j = 0;
	state = IN;
	for (i = 0; i < LONGEST_WORD; i++)
		histogram[i] = 0;

	/* Detect words in input and tally their lengths */
	while ((c = getchar()) != ';') {

		if (c == ' ' || c == '\n' || c == '\t') {
			state = OUT;
			histogram[wordLength]++;
			wordLength = 0;
		}
		else if (state == OUT) {
			state = IN;
			nw++;
		}
		if (state == IN)
			wordLength++;
	}

	for (i = 0; i < LONGEST_WORD; i++) {
		printf("%3d\t", i);
		for (j = 0; j < histogram[i]; j++)
			putchar('#');
		printf("\n");
	}

}