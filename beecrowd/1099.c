#include<stdio.h>
int main()
{
    int N,X,Y;
    scanf("%d",&N);
    int i;
    for(i=0; i<N; i++)
    {
        scanf("%d %d",&X,&Y);
        int j,sum=0;
        if(X>Y)
        {
            for(j=Y+1; j<X; j++)
            {

                if(j%2!=0)
                {
                    sum+=j;
                }

            }
        }
        else
        {

            for(j=X+1; j<Y; j++)
            {
                if(j%2!=0)
                {
                    sum+=j;
                }

            }

        }
        printf("%d\n",sum);
    }
    return 0;
}
