#include<stdio.h>
int main()
{
    int i,a[3],sum=0;
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
        printf("sum is %d\n",sum);
    }


    return 0;

}

