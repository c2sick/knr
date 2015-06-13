#include <stdio.h>
/* program name: horizontal histogram of frequency of words, chars, lines.
 * Exercise 1-13: Write a program to print a histogram of the lengths of words
 * in its input. It is easy to draw the histogram with the bars horizontal; a
 * vertical orientation is more challenging.
 */
#define IN 1// in a word
#define OUT 0// out a word 
#define MINWLENGTH 2// set for min chars in a word 
#define MAXWLENGTH 20// set for max chars in a word 

main()
{
	int state, cc, wc, ln, wl, i, j;/* state for IN & OUT, cc = char count, 
	wc = word count, ln = lines, wl = length of words, i = j = storage*/
	int lengths[MAXWLENGTH];/* this declaration means an array of this constant. 
	[MAXWLENGTH - 1], so 0th to 19th.*/
	cc = wc = wl = 0;// set these to 0 cuz we want to count these.
	ln = 1;// we start on a line. 
	state = OUT;// we start outside of a word.
/* use i elements, to hold the total elements, and initialize them. */
	for (i = 0; i <= MAXWLENGTH; ++i)// set lengths at position MAXLENGTH to 0, so theres no garbage data.
	{
		lengths[i] = 0;// all elements are set to 0. 
	}

	while ((i = getchar()) != EOF)
	{// start reading.
		++cc;
		if (i == ' ' || i == '\n' || i == '\t')
		{// this block will do its work when we encounter OUT.
			if (state == IN) 
			{// we need to check for being IN, cuz we OUT.
				++wc; // counts words.
				state = OUT;// set to OUT for TRUE whitespace(s).
				/* now to catch lengths of words.*/	
				if (wl <= MAXWLENGTH)
				{// check word length is true.
					++lengths[wl];// add 1 to array of elements (wl).
				}
				// ...Reset our word length here. 
				wl = 0;
			}
			/* If it's a new line, we're still out of a word but need to increment the
			   line count*/
			if (i == '\n') 
			{// for newline counting.
				++ln;// count lines.
			}
		} 
		
		else 
		{// for everything else.
			state = IN;/* we obviously must be in a word if no conditions which expect
			states of OUT occur.*/
			++wl;// count lengths by adding 1 untill we reach escape sequence.
		}
			++cc;// count chars. position of this statement is logical. 
	}
/*setup the histogram.*/
	printf("\nWORD LENGTH FREQUENCY\n");// include a title. 
	for (i = 5; i < 80; i += 5)
	{// set columns.
		printf("%5d", i);// show the columns, neatly, thus "%5d". 
	}

	printf("\n");// place rows on a newline. 
	j = MINWLENGTH;// we want to know the frequency of words from size 2 to 20...
	while (j <= MAXWLENGTH) 
	{// ...see, now we can use j to check against the max. 
		i = lengths[j];// let i store a length array of j.
		if (i > 0)// if lengths is greater than 0, so any input. 
		{// now we want to display the frequency.
			printf("%d | ", j);// j is rows. 
			while (i > 0)// same as above if(), but for as long as it occurs, do...
			{// represent the lengths of j as i being "#".
				printf("#");// any character may be used here. 
				i -= 1;// logically this works for coditions checking against 0.
			}
			printf("\n");// for every row.
		}
		++j;// j is MINLENGTH, so keep on adding 1 to encapsulate occuring lengths.  
	}
	printf("%d words, %d chars, %d lines.\n", wc, cc, ln);// lastley, display the count record.
}
