/* program to calculate the area of a circle */ //  A comment that identifies the purpose of program.

#include <stdio.h>					/* A reference to a specific file which contains information that must be included in the program when 
									it is compiled.	The inclusion of this required information will be handled automatically by the compiler.*/

#define PI 3.14159					/* Program contains a symbolic constant, PI, that represents the numerical value 3.14159. This is a form 
									of shorthand that exists for the programmer's convenience. When the program is actually compiled, the symbolic 
									constant will automatically be replaced by its equivalent numerical value.*/

float process(float radius);		/* Function Prototype - process accepts a floating-point argument and returns a floating-point value. */

int main()							/* This is the heading for the function main. The empty parentheses following the name of the function 
									indicate that this function does not include any arguments.*/

{									/* The remaining 5 lines of the program are indented and enclosed within a pair of braces. The 5 lines 
									comprise the compound statement within main. */

	float radius, area;				/* Variable Declaration - it establishes the symbolic names radius and area as floating-point variables. */
	
	printf("Radius = ? ");			/* Expression statement - printf generates a request for information (namely, a value for the radius).*/
									
	scanf("%f", &radius);			/* Expression statement - A value is entered into the computer in the third indented line scanf.*/
	
	area = process(radius);			/* Expression statement - The main function is preceded by a funtion declaration which indicates that 
									process accepts a floating-point argument and returns a floating-point value. */

	printf("Area = %f\n", area);		/* Expression statement - The last indented printf line causes the calculated value for the area to be displayed. 
									The numerical value will be preceded by a brief label. */
									
									/* Notice that each expression statement within the compound statement ends with a semicolon. This is required for all
									expression statements. */
									
}									

float process(float r) 				/* Function Definition  - this version utilizes a seperate programmer-defined function, called process, to 
									carry out the actual calculations (i.e., to process the data). Within this function, r is an argument (also
									called a parameter) that represents the value of the radius supplied to process from main. */

{
	float a;						/* Local Variable Declaration - "a" */
	
	a = PI * r * r;					/* Assignment statement - causes the area to be calculated from the given value of the radius. Within this statement 
									the asterisks (*) represent multiplication signs. */
	
	return(a);						/* The (a) is the calculated result that is returned to main. */
}
									/* The reference to the function appears in main, within the statement (area = process(radius);)*/