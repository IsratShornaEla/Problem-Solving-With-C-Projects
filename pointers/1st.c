#include<stdio.h>
int main()
{
    int a;
    int *p;
    a = 10 ;
    p = &a;

    printf("value of a is =%d\n",a);
    printf("address of a is =%d\n",&a);
    printf("value of p pointer is =%d\n",*p);
    printf("address of p pointer is =%d\n",&p);
    printf("address of the int var in p pointer is =%d\n",p);
    printf("\n\n");


    *p=3;
    printf("value of a is =%d\n",a);
    printf("address of a is =%d\n",&a);
    printf("value of p pointer is =%d\n",*p);
    printf("address of p pointer is =%d\n",&p);
    printf("address of the int var in p pointer is =%d\n",p);
    printf("\n\n");


    a=1034;
    printf("value of a is =%d\n",a);
    printf("address of a is =%d\n",&a);
    printf("value of p pointer is =%d\n",*p);
    printf("address of p pointer is =%d\n",&p);
    printf("address of the int var in p pointer is =%d\n",p);
    printf("\n\n");

    return 0;
}
