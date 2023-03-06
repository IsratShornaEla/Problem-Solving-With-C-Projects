#include<stdio.h>
int main()
{
    double number,sum=0;

    do
    {
        printf("the number is ");
        scanf("%lf",&number);
        sum=sum+number;
    }
    while(number!=0.0);
    printf("sum=%.2lf\n",sum);
    return 0;
}
