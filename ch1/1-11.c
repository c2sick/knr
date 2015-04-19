#include <stdio.h> /*program name: count words,  */

main()
{
	int c, nl, nw, nc, state; 
	state = out;
	nl = nw = nc = 0;

	while ((c = getchar()) != EOF)
	{++nc;

		if (c == '\n') 
		{
			nl++;			
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
	
	printf("%d %d %d\n", nl, nw, nc);
}