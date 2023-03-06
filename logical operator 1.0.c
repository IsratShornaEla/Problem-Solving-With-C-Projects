#include<stdio.h>
int main()
{
    int x=5,y=5,a;
    a= x == 6 && y == 5;
    printf("%d\n",a);//0
    a= (x==5);
    printf("%d\n",a);
    a= !(x==5);
    printf("%d",a);
    return 0;
}

