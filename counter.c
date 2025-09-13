#include <stdio.h>

/* count characters in input; 2nd version */
int main()
{
	/* Exercise 1-8 */

	// int c = 0;
	// int ts = 0;
	// int blanks = 0;
	// int newlines = 0;

	// while ( (c=getchar()) != ';' ) {
	// 	if (c == ' ')
	// 		++blanks;
	// 	if (c == '\t')
	// 		++ts;
	// 	if (c == '\n')
	// 		++newlines;
	// }
	// printf("Blanks:   %d\nTabs:     %d\nNewlines: %d\n", blanks, ts, newlines);


	/* Exercise 1-9 */

	// int c = 0;
	// int cPrev = 0;

	// while ( (c=getchar()) != ';' ) {
	// 	if (c==' ' && cPrev==' ')
	// 		;
	// 	else
	// 		putchar(c);
	// 	cPrev = c;
	// }


	/* Exercise 1-10 */

	// int c = 0;
	// while ( (c=getchar()) != ';' ) {
	// 	if ( c == '\t' ) {
	// 		putchar('\\');
	// 		putchar('t');
	// 	}
	// 	else if ( c == '\b') {
	// 		putchar('\\');
	// 		putchar('b');
	// 	}
	// 	else if ( c == '\\') {
	// 		putchar('\\');
	// 		putchar('\\');
	// 	}
	// 	else
	// 		putchar(c);
	// }


	/* Exercise 1-11 */

	// Strings of character input with repeated spaces, tabs, or newlines would 
	// be one test case. Another test case would be what no input would result in,
	// and yet another test case is seeing the output from inputting purely letters.
	// Also I'm not sure how the backspace char '\b' is treated. Also there is a typo
	// with the comparison of c to '\t'.


	/* Exercise 1-12 */

	#define IN 1 /* inside a word */
	#define OUT 0 /* outside a word */
	/* count lines, words, and characters in input */
	int c, nw, state;
	state = IN;
	while ((c = getchar()) != ';') {
		if (c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		else if (state == OUT) {
			state = IN;
			putchar('\n');
		}
		putchar(c);
	}

}