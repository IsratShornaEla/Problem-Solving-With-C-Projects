#include<stdio.h>
int main()
{int n,i,k;
scanf("%d",&n);
    for(i=1;i<=n;n/=2)
    {
        printf("e\t\t");
        for(k=1;k<=n;k+=1)
        {
            printf("f  ");
        }
        printf("\n");
    }
}
