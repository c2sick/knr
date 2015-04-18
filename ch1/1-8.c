#include <stdio.h> /*write a program to count for blanks, tabs and newlines*/

main()
{//blanks==b, tabs==t, newline==nl
	int c, b, t, nl;

	while (c = getchar() != EOF)
	{//read input
		if (c == ' ')
			++b;
		if (c == '\t')
			++t;
		if (c == '\n')
			++nl;
	}
	printf("blanks: %d, tabs: %d, newlines: %d\n", b, t, nl);
}
