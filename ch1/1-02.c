#include <stdio.h>

/* Exercise 1-2. Experiment to find out what happens when prints 's argument string contains
 * \c, where c is some character not listed above.
 */

main() 
{
	/* Uncomment the next line for an invalid escape character.*/
	/* printf("Hello world! \c\n");*/
	/* Compare with a valid one: */
	printf("Hello world\b\n");
}