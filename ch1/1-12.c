#include <stdio.h>
/* 
 * Exercise 1-12. Write a program that prints its input one word per line.
 */
#define IN 1/* in a word */
#define OUT 0/* outside a word*/

main()
{
	int c, nl, nw, nc, state; // we can manipulate the status of words states.
	state = OUT; //we start outside a word. 
	nl = nw = nc = 0; //we want to count the occurances. 
 
	while ((c = getchar()) != EOF)
	{//i want to count my characters. 
		++nc;

		if (c == '\n') 
		{//i want to count my newlines.
			nl++;//add 1...			
		}

		if (c == ' ' || c == '\n' || c == '\t')
		{//i want to change state and add my feature for "OUT". 
			if (state == IN)//we want state = OUT/*so check it to IN*/ 
			{
				state = OUT;//assign it.
				putchar('\n');//do feature./*every time we exit a word*/
			}
		}
/*this block is checked only when state=OUT, thus puts us back in a word and adds to nw */
			else if (state == OUT)//we want state = IN/*so check it to OUT*/
			{
				state = IN;//assign it. 
				nw++;//add 1...
			}
/*this block is checked only when state=IN, to output current input, thus finish checking while().*/
		if (state == IN)//checks for everytime, untill state != IN; not in a word.    
		{//we want to ouput it everytime we encounter checking for IN. 
			putchar(c);// display current input char.
		}
	}
	
	printf("nl: %d nw: %d nc: %d\n", nl, nw, nc);//i want to output my var's as digits.
	/*for recording the occurances*/
}
