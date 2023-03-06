#include<stdio.h>
int main()
{
    int a,b;
    float i,j;
    for(i=0;i<2.1;i+=0.2)
    {
        for(j=1;j<=3;j++)
        {
            if(i>0 && i<1 || i>1 && i<2)
            {
                printf("I=%.1f J=%.1f\n",i,i+j);
            }
            else
            {
                a=(int)i;
                b=(int)(i+j);
                printf("I=%d J=%d\n",a,b);
            }
        }
    }
    return 0;
}
