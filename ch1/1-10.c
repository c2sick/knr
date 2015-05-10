#include <stdio.h> 

/*
 * Exercise 1-10. Write a program to copy its input to its output, 
 * replacing each tab by \t , each backspace by \b , and each backslash by \\ .
 * This makes tabs and backspaces visible in an unambiguous way.
 */

main() 
{	
	char c;// 1 byte is sufficient enough. 

	while ((c = getchar()) != EOF)
	{// if any of these escape sequences occur, replace it with the required text.
		if (c == '\b')
		
			printf("\\b");	

		else if (c == '\t')

			printf("\\t");

		else if ( c == '\\')
	
			printf("\\\\" );

		else

			putchar(c);// output everything else. 
	} 
}