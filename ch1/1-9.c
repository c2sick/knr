#include <stdio.h>

/*
 * Exercise 1-9. Write a program to copy its input to its output, 
 * replacing each string of one or more blanks by a single blank.
 */

main() 
{
	char c;// lets say char for the smallest allocation size. 
	int s = 0;// we being at 0 spaces. 

	while ((c = getchar()) != EOF)
	{// start reading input
		if (c == ' ') 
		{// if true whitespace, continue to the nested if(). 
			if (s == 0) 
			{// s is 0 because we are 
				putchar(c);// copy current, which is single space. 
			}

			s++;// add 1 to spaces. 
		} 

		else
		{// this will check when a non-space has occurred. 
			s = 0;// reset spaces to 0, so when a space has occurred we can check for it.
			putchar(c);// copy current, which is non-space.
		}
	}
}