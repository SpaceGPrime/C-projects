#include <stdio.h>

int main(int argc, char const *argv[])
{
	int c;
	while((c = getchar()) != EOF) {
		if (c == '\t')
		{
			printf("\\t");
		}
		if (c == '\b')
		{
			printf("\\b");
		}

	}
	printf("%d\n", c);
	return 0;
}