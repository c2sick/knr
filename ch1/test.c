#include <stdio.h>

int main(void) {
	char c;
	int blanks, tabs, nls = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			blanks++;
		}
		if (c == '\t') {
			tabs++;
		}
		if (c == '\n') {
			nls++;
		}
	}

	printf("%d blanks, %d tabs, and %d newlines.\n", blanks, tabs, nls);
	return 0;
}