#include <stdio.h>

int main(int argc, char const *argv[])
{
	int c, sp;
	
	sp = 0;

	while((c = getchar()) != EOF) {
	    if (c != 32)
	    {
	    	sp = 0;
	    }
	    if (c == 32)
	    {
	    	++sp;
	    }
	    if (sp <= 1)
	    {
	    	putchar(c);
	    }
	}
	printf("%d\n", sp);
	return 0;
}