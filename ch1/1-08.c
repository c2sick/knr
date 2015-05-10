#include <stdio.h> 

/*
 * Exercise 1-8. Write a program to count blanks, tabs, and newlines.
 */

main()
{
	int c, b, t, nl;// set a variable to read input(c), and the rest for what u want to count.
	b = t = nl = 0;// if u want to count they obviously begin at 0 count. 

	while ((c = getchar()) != EOF)// we need to read input.
	{// here we a checking the occurances of what we want to count. then adding 1. 
		if (c == ' ')
			++b;
		if (c == '\t')
			++t;
		if (c == '\n')
			++nl;
	}
	printf("blanks: %d, tabs: %d, newlines: %d\n", b, t, nl);// display results. 
}
