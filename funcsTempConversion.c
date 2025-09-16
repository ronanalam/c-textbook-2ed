#include <stdio.h>
#include <math.h>

float converter_FtoC(int temp, int forward_reverse);
int readStringToInt();

int main() {

	int c;
	int input, output;
	input = output = 0;

	printf("Input integer temperature in F, followed by ';'.\nInput 32; to quit.\n");

	while (output != 32) {
		output = readStringToInt();
		printf("%d F = %f C\n", output, converter_FtoC(output, 0));
	}

	return 0;
}



/* Converts F to C, unless reverseConversion = 1. In that case, converts C to F. */
float converter_FtoC(int temp, int reverseConversion) {
	return reverseConversion*( (9.0/5.0)*temp + 32 ) + (1-reverseConversion)*( (temp-32)*(5.0/9.0) );
}



/* Takes valid input string and returns an int. */
int readStringToInt() {
	int c, negate, out;
	out = negate = 0;

	while ( (c=getchar()) != ';' ) {
		if (c == '-')
			negate = 1;
		if (c>='0' && c<='9')
			out = (10*out) + (c-'0');
		else
			out = 0;
	}
	return pow(-1,negate) * out;
}