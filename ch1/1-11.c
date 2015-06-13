#include <stdio.h> 

/*
 * Exercise 1-11. How would you test the word count program? 
 * What kinds of input are most likely to uncover bugs if there are any?
 * Answer: wraping text caused by newlines, and symbols without spaces 
 * will most likely introduce erroneous word counts.  
*/
/*create two constants for either being in a word or outside of one.*/
#define IN 1
#define OUT 0

main() 
{
	int c, nl, nw, nc, state;
	state = OUT;// we start outside of a word. 
	nl = nw = nc = 0;

	while ((c = getchar()) != EOF) 
	{	
		nc++;// this will count every char occurance.
		
		if (c == '\n') 
		{
			nl++;// count newlines.
		}
		
		if (c == ' ' || c == '\n' || c == '\t') 
		{// if we encounter these we will be outside of a word. 
		
			if (state == IN) 
			{// so being outside of a word means we must add a newline and represent it in "state".
				state = OUT;
				putchar('\n');
			}
		} 

		else if (state == OUT) 
		{// now if non-spaces occur we must be at the start of a word...
			state = IN;//...so say that were in a word. 
			nw++;// and add 1 because we wont be checking for OUT untill we actually have a space. 
		}
		
		if (state == IN) 
		{// now if were still in a word...
			putchar(c);//...output current char. 
		}
	}

	printf("lines: %d words: %d chars: %d\n", nl, nw, nc);// display your results. 
}