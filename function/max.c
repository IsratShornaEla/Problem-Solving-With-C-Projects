#include<stdio.h>
int max(int a,int b);
int main()
{
    int maximum,c,d;
    scanf("%d %d",&c ,&d);
    maximum=max(c,d);
    printf("%d\n",maximum);
    return 0;
}
int max(int a, int b)
{
    int mx;
    if(a>b)
    {
        mx=a;
    }
    else{
        mx=b;
    }
    return mx;
}
