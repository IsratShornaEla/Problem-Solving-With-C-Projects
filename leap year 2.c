#include<stdio.h>
#include<math.h>
int main()
{
    int y;
    printf("Enter Your Year : \n");
    scanf("%d",&y);
    if(y%400==0||y%4==0)
    {
        printf("\nLeap Year\n");
    }

    else
    {
        printf("\nNot Leap Year\n");
    }

    return 0;
}
