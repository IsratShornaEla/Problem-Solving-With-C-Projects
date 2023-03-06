#include<stdio.h>
int main()
{
    int i;
   double y,j,x;
   double n[100];
    scanf("%lf",&y);

    for(i=0;i<100;i++)
    {
        printf("N[%d] = %.4lf\n",i,y);
        y=y/2;

    }
    return 0;

}
