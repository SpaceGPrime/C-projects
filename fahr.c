#include <stdio.h>

int main(int argc, char const *argv[])
{
	printf("\"Fahr\"\n\n");

	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 10;
	step  = 1;

	celsius = lower;
	while(celsius <= upper) {
	    fahr = (celsius * 1.8) + 32.0;
	    printf("%3.0f\t%6.2f\n", celsius, fahr);
	    celsius = celsius + step;
	}
	return 0;
}
