#include<stdio.h>
int main()
{
    int N,X,i,I=0,O=0;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&X);
        if(X>=10 && X<=20) I++;
        else O++;

    }
    printf("%d in\n%d out\n",I,O);
}
