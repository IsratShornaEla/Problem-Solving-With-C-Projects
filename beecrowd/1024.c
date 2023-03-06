#include<stdio.h>
#include<string.h>

int main()
{

    char c[100],b[100];
    int i,j,k,t,f,l,m,n;
    scanf("%d",&t);

    for(i=1; i<=t; i++)
    {
        gets(b);
        f=strlen(b);
       for(l = 0; l < f; l++)
    {
        c[l] = b[f-1-l];
    }

        k=f/2;
        for(l=0; l<k; l++)
        {
            if(((c[l]>='a')&&(c[l]<='z')) ||((c[l]>='A')&&(c[l]<='Z')))
            {
                c[l]+=3;
            }
        }
        for(l=k; l<f; l++)
        {
            if(((c[l]>='a')&&(c[l]<='z')) ||((c[l]>='A')&&c[l]<='Z'))
            {
                c[l]+=2;
            }
            else
            {
                c[l]-=1;
            }

        }

        for(l = 0; l <f; l++)
            printf("%c", c[l]);
        printf("\n");
    }
    return 0;

}
