#include <stdio.h>

#define IN 1
#define OUT 0 
main()
{
	int c, nw, nl, nc, state;

	nw = nl = nc = 0; 
	state = OUT;

	while ((c = getchar()) != EOF)
	{
		++nc;

		if (c == '\n')
		{
			++nl;
		}

		if (c == ' ' || c == '\n' || c == '\t')
		{
			state = OUT;
		}
		else if (state == OUT)
		{
			state = IN;
			nw++;

		}
		
	}
	printf("words: %d lines: %d chars: %d\n", nw, nl, nc);
}
