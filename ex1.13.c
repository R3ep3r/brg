#include <stdio.h>
/* count digits, white space, others */
main()
{
	int c;
	while ( c = getchar() != EOF ){
		if ( c == '\n' || c == ' ' || c == '\t' )
			putchar('\n');
		else
			putchar('*');
	}

}
