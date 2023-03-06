#include<stdio.h>
int main()
{
    int t,n,m;
    scanf("%d",&t);
    while(t!=0)
    {
        scanf("%d",&n);
        if(n>=0&&n<=20)
        {
            m=n/2;
           n=n-m;
            printf("%d %d\n",m,n);
        }
        t--;

    }
    return 0;
}
