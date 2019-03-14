#include <stdio.h>
 main()
 {
 float fahr, celsius;
 float lower, upper, step;
 printf("Table of contents\n");
 printf("Fahr - Celsius\n");
 for (fahr = 0 ; fahr <= 301; fahr = fahr + 20) {
 celsius = (5.0/9.0) * (fahr-32.0);
 printf("%3.0f %6.1f\n", fahr, celsius);
 }
 } 
