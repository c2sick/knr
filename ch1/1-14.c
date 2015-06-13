#include <stdio.h>
#include <string.h>
/* 
 * Exercise 1-14. Write a program to print a histogram of 
 * the frequencies of different characters in its input.
 */

main() 
{
	//int c;// current input char. 
	int i = 0;// storage.
	char chars[] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";// we want to count all chars and nums.
	/* cnum is the number of characters found in the above string */
	int cnum = 0;
	while (chars[i] != '\0') 
	{//use i to represent all chars, 
		cnum += 1;
		++i;
	}

	/* This array need its members to be initialized to zero. */
	int lengths[cnum];
	for (i = 0; i <= cnum; ++i) 
	{
		lengths[i] = 0;
	}

	// Capture input until it ends
	while ((c = getchar()) != EOF)
	{
		for (i = 0; i < cnum; ++i) 
		{
			if (c == chars[i]) 
			{
				lengths[i] += 1;
			}
		}
	}

	printf("\nCHARACTER FREQUENCY\n\n         5   10   15   20   25   30   35   40   45   50   55   60   65   70   75\n");
	
	int iter = 0;
	while (iter <= cnum) 
	{
		i = lengths[iter];
		if (i > 0) 
		{
			printf("%2c | ", chars[iter]);
			while (i > 0) 
			{
				printf("#");
				i -= 1;
			}
			printf("\n");
		}
		++iter;
	}
}