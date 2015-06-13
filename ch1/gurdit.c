#include <stdio.h>

int main()

{
	char fn[20];
	char crush[20];
	char num_babies;

	printf("whats ur name?\n");
	scanf("%s", fn);

	printf("who r u going to marry?\n");
	scanf("%s", crush);

	printf("how many kids will u have?\n");
	scanf("%d", num_babies);

	printf("%s and %s are in love and will have %d babies\n", fn, crush, num_babies);
}
