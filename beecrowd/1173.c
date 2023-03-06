#include<stdio.h>
int main()
{
    int x[10],i,j,n;
    scanf("%d",&n);
     printf("N[0] = %d\n",n);
    for(i=1;i<10;i++)
    {
 n=(n+n);
        x[i]=n;
       printf("N[%d] = %d\n",i,x[i]);
    }


    return 0;
}

