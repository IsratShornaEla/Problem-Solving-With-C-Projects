#include<stdio.h>
int main()
{
    char a;
    char *p;
    a = 'f';
    p = &a;

    printf("value of a is =%c\n",a);
    printf("address of a is =%c\n",&a);
    printf("value of p pointer is =%c\n",*p);
    printf("address of p pointer is =%c\n",&p);
    printf("address of the int var in p pointer is =%c\n",p);
    printf("\n\n");


    *p=3;
    printf("value of a is =%c\n",a);
    printf("address of a is =%c\n",&a);
    printf("value of p pointer is =%c\n",*p);
    printf("address of p pointer is =%c\n",&p);
    printf("address of the int var in p pointer is =%c\n",p);
    printf("\n\n");


    a=1034;
    printf("value of a is =%c\n",a);
    printf("address of a is =%c\n",&a);
    printf("value of p pointer is =%c\n",*p);
    printf("address of p pointer is =%c\n",&p);
    printf("address of the int var in p pointer is =%c\n",p);
    printf("\n\n");

    return 0;
}

