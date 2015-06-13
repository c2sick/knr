#include <stdio.h>

#define SIZE 1024
int main()
{
	int i, *p, a[SIZE];
	p = a;
	// a[5] == *(a + 5)
	
	for (i = 0; i < SIZE; i++)
		a[i] = i + 1;
	for (i = 0; i < SIZE; i++)
		printf("%d\n%d\n", *(p + i), *(p + SIZE - i - 1));

	return 0;
}