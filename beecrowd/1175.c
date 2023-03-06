#include<stdio.h>
int main()
{
    int N[20];
    int i,j=20;
    int m[j];
    for(i=0;i<20;i++)
    {
        scanf("%d",&N[i]);
        getchar();
    }
    for(i=0;i<20;i++)
    {
        j--;
        m[j]=N[i];

    }
    for(i=0;i<20;i++)
    {
        printf("N[%d] = %d\n",i,m[i]);
    }
    return 0;

}
