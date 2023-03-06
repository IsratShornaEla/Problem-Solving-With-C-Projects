#include<stdio.h>
int main()
{
    int a=5, b=6 ,c ;
     c=a>=b;        //(big or equal)
    printf("%d\n",c); //0
    c = a<=b ;      //(small or equal)
    printf("%d\n",c);  //1
    c =a !=b;
    printf("%d\n",c);  //1
    c= a == b;
    printf("%d\n",c);//1
    c=a=b;
    printf("%d",c);
    return 0;
}
