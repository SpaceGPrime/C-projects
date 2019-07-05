#include <stdio.h>
int main()
{
	printf("\"Celsius\"\n\n");

	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step  = 1;

	fahr = lower;
	while(fahr <= upper) {
	    celsius = (5.0 / 9.0) * (fahr - 32.0);
	    printf("%3.0f\t%6.2f\n", fahr, celsius);
	    fahr = fahr + step;
	}
}
