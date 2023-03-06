#include<stdio.h>
int main()
{
    int A,N,j=0,i;
    scanf("%d %d",&A,&N);
    while(N==0 || N<0)
    {
        scanf("%d",&N);
    }
    for(i=0;i<N;i++)
    {
        j=j+A+i;
    }
    printf("%d\n",j);
    return 0;
}
