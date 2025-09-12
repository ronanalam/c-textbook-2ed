#include <stdio.h>

int main() {
	float f, c;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	f = lower;
	printf("---------------------\n");
	printf("Celsius -> Fahrenheit\n");
	printf("---------------------\n");

	while(c<=upper) {
		f = c*(9.0/5.0) + 32.0;
		printf("%3.0f %17.1f\n", c, f);
		c += step;
	}
}