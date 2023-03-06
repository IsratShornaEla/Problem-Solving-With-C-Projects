#include<stdio.h>
int main()
{
    int x,n,i;
    while ( scanf ("%d", &n) != EOF )

    {

        x=0;
        if(n<1)
        {
            for(i=n; i<=1; i++)
            {
                x+=i;
            }

        }
        else
        {
            for(i=1; i<=n; i++)
            {
                x+=i;
            }

        }
        printf("%d\n",x);


    }
     return 0;
}
