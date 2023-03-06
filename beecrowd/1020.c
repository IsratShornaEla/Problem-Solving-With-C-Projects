#include<stdio.h>
int main()
{
    int A,y=0,m=0,d=0;
    scanf("%d",&A);
    y= A/365;
    A= A%365;
    m= A/30;
    d= A%30;
    printf("%d ano(s)\n",y);
    printf("%d mes(es)\n",m);
    printf("%d dia(s)\n",d);
    return 0;
}
