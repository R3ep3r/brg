#include <stdio.h>
 /* copy input to output; 1st version */
 main()
 {
 int c;
printf("Insert text\n");
 c = getchar();
 while (c != EOF) {
 putchar(c);
 c = getchar();
printf("\n");

printf("The value of EOF is %d\n", EOF,"\n");
}
}
