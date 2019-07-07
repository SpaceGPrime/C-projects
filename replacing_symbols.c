#include <stdio.h>
int main()
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
}