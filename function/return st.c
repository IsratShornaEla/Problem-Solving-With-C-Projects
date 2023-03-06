#include<stdio.h>
int max(int a,int b)
{
    int s;
    s=a+b;
    //return a+b;
    return s;
}
int main()
{
    /*int sum=max(3,4);
    printf("%d",sum);
    return 0;*/
    int c,d,sum;
    scanf("%d %d",&c,&d);
    printf("numbrs are %d ,%d\n",c,d);
    sum=max(c,d);
    printf("%d",sum);
    return 0;
}
