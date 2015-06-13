#include <stdio.h>

/* Exercise 1-3. Modify the temperature conversion program 
 * to print a heading above the table.
 */

main() 
{
	
	float f, c;// declare separately, simply for the fact that the variables will be used differently. 
	float lower, upper, step;// represent actions to be done. 

	lower = 0;// we want to start somewhere. 
	upper = 300;// we want to end at some point.
	step = 20;// we want to have a range of values, so use a reasonable value. 

	f = lower;// this assignment is to begin our fahr at our starting point. 
	/*lets do what were required now. add a title.*/
	
	printf("   F | C\n");// this is out title. very simple. 
	
	while (f <= upper)// this is to keep within our desired range of values. 
	{
		c = (5.0 / 9.0) * (f - 32.0);// do the math for our celsius equivalent.
		printf(" %3.0f %6.1f\n", f, c);// display the results in float. 
		f += step;// now after the first result we want to increase our fahr by our "step".
	}
}