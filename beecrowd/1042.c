#include<stdio.h>
int main()
{
    int a,b,c,swp=0;
    sacnf("%d %d %d",&a,&b,&c);
    if(a<b && a<c)
    {
        printf("%d\n",a)
        if(b<c)
        {
            printf("%d\n%d\n",b,c);
        }
        else if(c<b)
        {
            printf("%d\n%d\n",c,b)
        }
        printf("\n");
    }
    if(a>b && >b)
    {
        printf("%d\n",b)
        if(a<c)
        {
            printf("%d\n%d\n",b,c);
        }
        else if(c<b)
        {
            printf("%d\n%d\n",c,b)
        }
        printf("\n");
    }

}
