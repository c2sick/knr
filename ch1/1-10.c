#include <stdio.h> /*program name: visible escape sequences*/

main() 
{//check for /b /t // and reveal them.  	
	char c;

	while ((c = getchar()) != EOF)
	{
		if (c == '\b')
		
			printf("\\b");	

		else if (c == '\t')

			print("\\t")

		else if ( c == '\\')
	
			printf("\\\\" );

		else

			putchar(c); 
	} 
}