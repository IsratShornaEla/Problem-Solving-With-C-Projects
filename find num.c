#include<stdio.h>
int main()
{
    int n,f,l,sum;
    scanf("%d",&n);
    f=n;
    l=n%10;
    while(f>=10)
    {
        f=f/10;
        sum=f+l;

    }
    printf("\n1st number is %d & last number is %d \n",f,l);

    printf("\nTheir Summation is %d \n",sum);
    return 0;
}
