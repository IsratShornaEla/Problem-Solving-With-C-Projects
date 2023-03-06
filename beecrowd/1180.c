#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,y,count=0;
    scanf("%d",&n);
    int x[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&x[i]);

    }
    for(i=1; i<n; i++)
    {
        if(x[0]>x[i])
        {
            count=i;
            y=x[0];
            x[0]=x[i];
            x[i]=y;
        }
    }

    printf("Menor valor: %d\nPosicao: %d\n",x[0],count);
    return 0;
}
