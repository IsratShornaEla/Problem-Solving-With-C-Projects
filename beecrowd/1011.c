#include<stdio.h>
int main()
{
    double pi,R,VOLUME;
    scanf("%lf",&R);
    pi=3.14159;
    VOLUME= (4* pi * R * R * R)/3;
    printf("VOLUME = %.3lf\n",	VOLUME);
    return 0;
}
