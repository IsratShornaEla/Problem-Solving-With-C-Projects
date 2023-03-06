#include<stdio.h>
int main()
{
    int a,d;
    a=5;
    a++;  //a=a+1
    printf("%d\n",a);
    ++a;  //++a=1+a
    printf("%d\n",a);
    d=a++;
    printf("b is %d and a is %d\n",d,a);
    // d=a++    (1)d=a  (2)a=a+1
    d=++a;
    printf("b is %d and a is %d\n",d,a);
    //d=++a   (1)a=a+1  (2)d=a
    return 0;

}
