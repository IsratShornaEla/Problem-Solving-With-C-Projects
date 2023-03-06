

#include<stdio.h>
#include<string.h>

int main()
{

    int i,j,k,t,f,l,m,n;
    scanf("%d",&t);
    getchar();
    for(i=1; i<=t; i++)
    {
        char c[1000],b[1000];
        gets(c);
        f=strlen(c);

        if(f%2==0)
            k = f/2;
        else
            k = f/2 + 1;
        int cnt = 0;
        for(l = 0; l < k; l++)
        {
            if(((c[l]>='a')&&(c[l]<='z')) ||((c[l]>='A')&&c[l]<='Z'))
                c[l]+=2;
            else
                c[l]-=1;
        }
        for(l = k; l < f; l++)
        {
            if(((c[l]>='a')&&(c[l]<='z')) ||((c[l]>='A')&&c[l]<='Z'))
            {
                c[l]+=3;
            }
        }

        for(l = f-1; l >= 0; l--)
            printf("%c", c[l]);
        printf("\n");
    }

    return 0;

}
