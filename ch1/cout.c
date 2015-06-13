#include <stdio.h>
#include <string.h>

main()
{

	char chars2[] = "abc";// use this data to compare with this... 
	char chars3[] = { 'a', 'b', 'c', '\0',};// ...data here 

	int realCount = 0;// actual amount. 

	for (; chars2[realCount++] != '\0';);// we are counting all literal chars, so untill it is not the end. 

	// printf(format, args...)
	printf("strlen=%d, realLen=%d, equal? %s\nchars2=%d\n ", 
		strlen(chars2), realCount, strlen(chars2) == strlen(chars3) ? "yes" : "noo", strlen(chars3));
} 