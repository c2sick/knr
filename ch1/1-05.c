#include <stdio.h> 

/*
 * Exercise 1-5. Modify the temperature conversion program to print 
 * the table in reverse order, that is, from 300 degrees to 0.
 */

main()
{
	float f, c; 
	int lower, upper, step;
	
	lower = 0;
	upper = 300;
	step = 20;
	
	c = upper;// start at upper now.
	
	printf("   C | F\n");

	while (c >= lower)// check c against lower. it stop when c is -20. thus 300 to 0.
	{
		f = c * (9/5) + 32;// calculate f. 
		printf("%.0f\t %.1f\n", c, f);// display results
		c -= move;// to descend from upper.
	}
}
