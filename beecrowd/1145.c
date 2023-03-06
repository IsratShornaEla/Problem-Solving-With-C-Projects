#include<stdio.h>
int main()
{
    int i,j,X,Y;
    scanf("%d %d",&X,&Y);
    for(j=1;j<Y;)
    {
        for(i=1;i<X;i++)
        {
            printf("%d ",j++);

        }
        printf("%d",j);
        printf("\n");
        j+=1;

    }
    return 0;
}
