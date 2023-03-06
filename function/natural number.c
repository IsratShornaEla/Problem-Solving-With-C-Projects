#include <stdio.h>

/* Function declaration */
void printNaturalNumbers(int a, int b);

int main()
{
    int s, e;
    printf("Enter lower range to print natural numbers: ");
    scanf("%d", &s);
    printf("Enter upper limit to print natural numbers: ");
    scanf("%d", &e);

    printNaturalNumbers(s, e);

    return 0;
}

/* Function definition */
void printNaturalNumbers(int a, int b)
{
    int i;
    printf("Natural numbers from %d to %d are: \n", a, b);
    for(i=a;i<=b;i++)
    {
        printf("%d\n",i);
    }
}
