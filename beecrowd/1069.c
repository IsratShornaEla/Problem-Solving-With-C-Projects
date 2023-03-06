#include<stdio.h>
int main()
{
    int X,Y;
    scanf("%d %d",&X,&Y);
    int i,sum=0;
    if(X<Y)
    {
        for(i=X+1; i<Y; i++)
        {
            if(i%2!=0) sum+=i;

        }
        printf("%d\n",sum);
    }
    else if(X>Y)
    {
        for(i=Y+1; i<X; i++)
        {
            if(i%2!=0) sum=+i;
        }
        printf("%d\n",sum);
    }

    else
    {
        printf("%d\n",X-Y);
    }
    return 0;
}
