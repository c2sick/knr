#include <stdio.h> /*verify that the expression getchar() != EOF is 0 or 1*/

main()
{
	int c;
	c = (getchar() != EOF);
	printf("%d\n", c);
}
//answer is 1. and it makes sense for io to 1(on) and not off.