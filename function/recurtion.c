#include <stdio.h>

void print(int n);

int main()
{
    print(5);

    return 0;
}

void print(int n)
{
    /* Print the current value of n */
    printf("%d ", n);

    /* Base condition to terminate recursion */
    if(n <= 1)
    {
        /* Return and make no more recursive call */
        return;
    }

    /* Call print() function recursively with n-1 */
    print(n - 1);
}
