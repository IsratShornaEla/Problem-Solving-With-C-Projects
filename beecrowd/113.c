#include <stdio.h>
int main()
{
    int number1,number2,i;
    scanf("%d%d", &number1, &number2);

    if(number1<number2)
    {
        for(i=number1+1; i<number2; i++)
        {
            if(i%5==2 || i%5==3)
            {
                printf("%d\n",i);
            }

        }
    }

    else
    {
        for(i=number2+1; i<number1; i++)
        {
            if(i%5==2 || i%5==3)
            {
                printf("%d\n",i);
            }

        }
    }

    return 0;
}
