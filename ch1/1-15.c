#include <stdio.h>

/* 
 * Exercise 1.15. Rewrite the temperature conversion 
 * program of Section 1.2 to use a function for conversion.
 */

#define MAX_F 300.0// set a max.
#define STEP 20.0// set a step.

float convert_to_c(float f) 
{// this is our function, that only does the math. 
	float celsius = (5.0 / 9.0) * (f - 32.0);
	return celsius;
}

int main() 
{// lets now call our function. 
	printf("FAHRENHEIT   CELSIUS\n");// heading.
	float i;// local storage. 
	for (i = 0.0; i <= MAX_F; i += STEP) 
	{// everything we need is set in for().
		printf("%4.0f           %7.3f\n", i, convert_to_c(i));
	}// simply we say 'i' for fahr, and our func with parameter(i). 

	return 0;// let our function not return anything specific. 
}