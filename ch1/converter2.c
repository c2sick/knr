#include <stdio.h>
#include <string.h>

int bstr_to_i(char *s)
{
	int i, n;
	int size = strlen(s);

	for (n = i = 0; i < size; i++)
	{
		if (s[size - 1 - i] == '1')
			n = n | (1 << i);
	}
	return n;
}

int main(int n, char **argv)
{
	printf("%d\n", bstr_to_i(argv[1]));
}