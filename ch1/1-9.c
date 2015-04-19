#include <stdio.h>/*program name: spaces-to-single*/

int main(void) {//spaces==s
	char c;
	int s = 0;

	while ((c = getchar()) != EOF)
	{//read input
		if (c == ' ') 
		{//if first space...check s=0; tru. put(c)
			if (s == 0) 
			{//for first space s==0, put(c)
				putchar(c);
			}

			s++; //add it after the first space check.
		} 

		else 
		{//do if c != space. set s = 0. put(c).
			s = 0;
			putchar(c);
		}
	}
}