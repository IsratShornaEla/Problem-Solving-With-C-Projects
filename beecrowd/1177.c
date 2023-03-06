#include<stdio.h>
int main()
{
    int i,j,n;
    int a[10];
    scanf("%d",&n);

    for(i=1;i<=10;i+n)
    {
        for(j=0;j<n;j++)
        {
            a[i]=j;
             printf("a[%d]=%d\n",i-1,j);
i++;
        }
    }


}
