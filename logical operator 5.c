#include<stdio.h>
int main()
{
    int a=5,b=-7,c=0,d;
    d=a++ || ++c;
    printf("a=%d\nb=%d\nc=%d\nd=%d\n",a,b,c,d);
    return 0;
}

