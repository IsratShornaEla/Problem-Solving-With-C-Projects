#include<stdio.h>
int main()
{
    int a,d;
    a=5;
    a--;  //a=a-1 =5-1=4
    printf("%d\n",a);
    --a;  //++a=a-1=4-1=3
    printf("%d\n",a);
    d=a--;
    printf("b is %d and a is %d\n",d,a);
    // d=a--    (1)d=a =3  (2)a=a-1  =3-1=2
    d=--a;
    printf("b is %d and a is %d\n",d,a);
    //d=--a   (1)a=a-1=2-1=1  (2)d=a=1
    return 0;

}

