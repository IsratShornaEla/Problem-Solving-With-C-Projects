#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    int b[MAX_SIZE], a[MAX_SIZE];
    int i, n;

    /* Input size of the array */
    printf("Enter the size of the array : ");
    scanf("%d", &n);

    /* Input array elements */
    printf("Enter elements of b array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &b[i]);
    }
    /*
     * Copy all elements from b array to a array
     */
    for(i=0; i<n; i++)
    {
        a[i] = b[i];
    }

    /*
     * Print all elements of b array
     */
    printf("\nElements of b array are : ");
    for(i=0; i<n; i++)
    {
        printf("%d\t", b[i]);
    }

    /*
     * Print all elements of a array
     */
    printf("\nElements of a array are : ");
    for(i=0; i<n; i++)
    {
        printf("%d\t", a[i]);
    }

    return 0;
}
