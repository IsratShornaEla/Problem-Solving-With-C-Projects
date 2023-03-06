#include<stdio.h>
int main()
{
    int M,N;
    int i;
    int sum=0;
    while(scanf("%d %d",&M,&N)==2)
    {
        if(M<=0 || N<=0)
        {
            break;
        }
        else if(M>N)
        {
            for(i=N; i<=M; i++)
            {
                printf("%d ",i);
                sum+=i;

            }
        }
        else
        {
            for(i=M; i<=N; i++)
            {
                printf("%d ",i);
                sum+=i;
            }
        }
        printf("Sum=%d\n",sum);
        sum=0;
    }
    return 0;
}
