#include <stdio.h> 

/*
 * Exercsise 1-6. Verify that the expression getchar() != EOF is 0 or 1.
 */

main()
{
	int c;// declare a variable to be used as input. 
	c = (getchar() != EOF);// assign c to input. 
	printf("%d\n", c);// we want to display c as digit. 
}
/* answer is 1 for any input, but the program will retun 0 for no input. 
 * this is logical because no input does not fall in the perview of the expression 
 * getchar() != EOF
*/