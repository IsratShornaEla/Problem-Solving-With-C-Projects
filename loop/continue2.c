#include<stdio.h>
int main()
{

    int n;
    for(n=1;n<=100;n++)
    {

        printf("%d\n",n);
        {
            if(n<50)
            {
                continue;
            }
        }

    }
    return 0;
}

