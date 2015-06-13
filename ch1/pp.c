#include <stdio.h>
main()
{
	int a = 5; 
	int *p = &a;
	 *p = 7;
	printf("%d%d", a, p);

}