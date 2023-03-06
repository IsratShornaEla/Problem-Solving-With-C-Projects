#include <stdio.h>
main ()
{
float C, F;
printf("Enter temperature in Celcius :");
scanf("%f", &C);
F = 9*C/5+32;
printf("The temperature in Farenheit is : %.3f", F);
}
