#include <stdio.h>

int main(int argc, char const *argv[])
{
	int c, nl, sp, tb;
	
	nl = 0;
	sp = 0;
	tb = 0;

	while((c = getchar()) != EOF) {
	    if (c == '\n')
	    {
	    	++nl;
	    }
	    if (c == ' ')
	    {
	    	++sp;
	    }
	    if (c == '\t')
	    {
	    	++tb;
	    }

	}
	printf("%d %d %d\n", nl, sp, tb);
	return 0;
}