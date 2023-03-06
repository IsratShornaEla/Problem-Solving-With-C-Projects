#include<stdio.h>
int main()
{
    int a,i,x=0,y=0,z=0,k=0;
    for(i=1; i<=5; i++)
    {
        scanf("%d",&a);
        if(a%2==0)
        {
            if(a>0)z++;
            else if(a<0) k++;
            x++;
        }
        else if(a%2!=0)
        {
            if(a>=0)z++;
            else if(a<0) k++;
            y++;
        }

    }
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",x,y,z,k);
    return 0;
}
