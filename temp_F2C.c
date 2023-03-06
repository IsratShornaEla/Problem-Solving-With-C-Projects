#include <stdio.h>
main ()
{
float C, F;
printf("Enter temperature in Farenheit :");
scanf("%f", &F);
C = 5*(F-32)/9;
printf("The temperature in Celcius is : %.3f", C);
}
