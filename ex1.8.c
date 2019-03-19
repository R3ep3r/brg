#include <stdio.h>

/* count lines in input */

main()
{
	int c, nl, nt, ns;
	nl = 0;
	nt = 0;
	ns = 0;
	while ((c = getchar()) != EOF){
		if (c == '\n')
			++nl;
		if (c == '\t')
			++nt;
		if (c == ' ' )
			++ns;
	}
printf("Blanks: %d\nTabs: %d\nLines: %d\n", ns, nt, nl);
}
