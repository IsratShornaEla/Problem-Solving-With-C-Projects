#include<stdio.h>
int main()
{
    int X,Y;
    while(scanf("%d %d",&X,&Y)==2)
    {
        if(X>Y)
        {
            printf("Decrescente\n");
        }
        else if(X<Y)
        {
            printf("Crescente\n");
        }
        else{
            break;
        }
    }
    return 0;
}
