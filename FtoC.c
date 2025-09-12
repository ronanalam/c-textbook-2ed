#include <stdio.h>

#define UPPER 300
#define LOWER 0
#define STEP 20

int main() {
	// float f, c;
	// int lower, upper, step;

	// lower = 0;
	// upper = 300;
	// step = 20;

	// f = lower;
	// printf("---------------------\n");
	// printf("Fahrenheit -> Celsius\n");
	// printf("---------------------\n");

	// while(f<=upper) {
	// 	c = (5.0/9.0) * (f-32.0);
	// 	printf("%3.0f %17.2f\n", f, c);
	// 	f += step;
	// }

	int f;

	for (f = UPPER; f >= LOWER; f -= STEP) {
		printf("%3d %17.1f\n", f, (5.0/9.0)*(f-32) );
	}
}