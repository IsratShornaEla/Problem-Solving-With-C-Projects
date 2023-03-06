#include <stdio.h>

/* Function declaration */
int cube(int num);

int main()
{
    int num;
    int c;

    /* Input number to find cube from user */
    printf("Enter any number: ");
    scanf("%d", &num);

    c = cube(num);

    printf("Cube of %d is %d", num, c);

    return 0;
}
/**
 * Function to find cube of any number
 */
int cube(int num)
{
    return (num * num * num);
}
