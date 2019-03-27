#include <stdio.h>
#include <math.h>

#define MAXLEN 1000

void itoa(int n, char s[]);

int main(int argc, char *argv[])
{
	int n;
	char s[MAXLEN];
	if( argc == 2 ) {
		char *a = argv[1];
		n = atoi(a);
	}
	else if( argc > 2 ) {
		printf("Too many arguments supplied.\n");
	}
	else {
		printf("One argument expected.\n");
	}
//	printf("The argument is: %d\n", n);
	itoa(n,s);
	printf("%s\n", s);
	return 0;
}

void itoa(int n, char s[])
{
	static int i;
	if(n / 10)
		itoa(n / 10, s);
	else
	{
		i = 0;
		if(n < 0)
			s[i++] = '-';
	}
	s[i++] = abs(n) % 10 + '0';
	s[i] = '\0';
}
