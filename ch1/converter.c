/*Learning bitwise operations.  
 ******************************
*/
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>
/*decimal to binary converter*/
int str_to_int (char *s)/*string to int function*/
{//convert string to decimal.
	int i, n;
	int size = strlen(s);//for string length.

	for (i = n = 0; i < size; i++)/*let there be a placeholder for s[]*/ hj 

	{//do conversion
		n = n * 10 + (s[i] - '0');/* n*10; convert for base 10(dec)
		and add that to the offset of its decimal value.*/
	}
	return n; 
}

void int_to_bin (int n)/*convert my decimal result to binary*/
{
	int i, size = sizeof(n) * 8;//going by bytes, 8bits=1byte

	for (i = size - 1; i >= 0; --i)/*set for max(size-1), and less i.*/
	{
		if (n & (1 << i))//common;put(1), uncommon(0), ;
			putchar('1');
		else
			putchar('0');
	}
	putchar('\n');
}

double  (int argc, char **argv)
{
	int i = str_to_int(argv[1]);
	int_to_bin(i);
}

bit = 1 or 0 

byte = 8 bits = 8 (1s or 0s)
