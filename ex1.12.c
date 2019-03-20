#include <stdio.h>

int main()
{
	int c;
	printf("Introduceti cuvantul: ");
	c = getchar();
	printf("Cuvantul este: ");
	while (c != EOF) {
		if (c == ' ') {
			putchar('\n');
		}
		else {
			putchar(c);
		}
	c = getchar();
	}
return 0;
}
