#include<stdio.h>
int main()
{
    int max=0,index,i,number;
    for (i=1;i<=100;i++)
    {
        scanf("%d",&number);

        if(number > max)
        {
            max = number;
            index = i;
        }
    }
    printf("%d\n",max);
    printf("%d\n",index);

    return 0;
}
