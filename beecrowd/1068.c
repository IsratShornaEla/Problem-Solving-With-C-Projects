#include<stdio.h>
int main()
{
    int X,j=0;
    scanf("%d",&X);
    int i;
    for(i=X+1;i>X;i++)
    {
        if(i%2!=0)
        {
            printf("%d\n",i);
            j++;
            if(j==6)
            {
                break;
            }

        }
    }
    return 0;
}

