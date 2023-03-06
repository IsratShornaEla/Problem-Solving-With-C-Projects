#include<stdio.h>
int main()
{
    int x=2,y=5,z=0;

    y=y + ++x;
    printf("%d %d %d\n",x,y,z);
    return 0;
}
