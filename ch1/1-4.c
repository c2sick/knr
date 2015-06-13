#include <stdio.h> 

/*
 * Exercise 1-4. Write a program to print the
 * corresponding Celsius to Fahrenheit table.
*/

main()
{// same concept as EX. 1-3
	float f, c; 
	float lower, upper, step;
	
	lower = 0;
	upper = 300;
	step = 20;

	c = lower;

	printf("   C | F\n");
	
	while (f <= upper)
	{
		f = c * (9/5) + 32;// do the math for our fahr equivalent.
		printf("%.0f\t %.1f\n", c, f);// display.
		c += move; // add for next computation.
	}
}