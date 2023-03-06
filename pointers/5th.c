#include<stdio.h>
int main()
{
    char a;
    int *p;
    a = 'f';
    p = &a;
    printf("value of a is =%c\n",a);
    printf("address of a is =%d\n",&a);
    printf("value of p pointer is =%c\n",*p);
    printf("address of p pointer is =%d\n",&p);
    printf("address of the int var in p pointer is =%d\n",p);
    printf("\n\n");


    }
