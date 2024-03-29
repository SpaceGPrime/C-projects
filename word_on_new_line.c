#include <stdio.h>

#define IN 1
#define OUT 0

int main(int argc, char const *argv[])
{
	int c, state;

	state = OUT;

	while((c = getchar()) != EOF) {
	    if (c == ' ' || c == '\n' || c == '\t')
	    {
	    	if (state == IN)
	    	{
	    		putchar('\n');
	    		state = OUT;
	    	}
	    } else {
	    	state = IN;
	    	putchar(c);
	    }
	}
	return 0;
}