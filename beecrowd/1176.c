#include<stdio.h>
int main()
{
    unsigned long long int number[60];
    int i,N,j;
    number[0]=0;
    number[1]=1;
    for(i=2;i<61;i++)
    {
        number[i]=number[i-1]+number[i-2];}
        scanf("%d",&N);
     for(i=0;i<N;i++)
    {
        scanf("%d",&j);
        printf("Fib(%d) = %lld\n",j,number[j]);
    }
    return 0;
}

