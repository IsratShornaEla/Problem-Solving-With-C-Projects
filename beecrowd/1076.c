#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int i;
    for(i=1;i<=10;i++)
    {
        int mul;
        mul=i*N;
        printf("%d x %d = %d\n",i,N,mul);
    }
    return 0;
}
