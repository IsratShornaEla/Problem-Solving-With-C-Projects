#include<stdio.h>
int main()
{
    int X,Y;
    while(scanf("%d %d",&X,&Y)==2)
    {
        if(X==0 || Y==0)
        {
            break;
        }
        else if(X>0 && Y>0)
        {
            printf("primeiro\n");
        }
        else if(X>0 && Y<0)
        {
            printf("quarto\n");
        }
        else if(X<0 && Y<0)
        {
            printf("terceiro\n");
        }
        else{
            printf("segundo\n");
        }
    }
    return 0;
}
