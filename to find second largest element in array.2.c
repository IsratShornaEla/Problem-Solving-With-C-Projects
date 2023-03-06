
#include<stdio.h>

int main()
{
    int numbers[10],temp;

    for (int i = 0; i < 10; i++)
    {
		printf("Enter the Number : %d  : ",i+1);
        scanf("%d", &numbers[i]);
    }


    for (int i = 0; i < 10; ++i)
    {
        for (int j = i + 1; j < 10; ++j)
        {
            if (numbers[i] < numbers[j])
            {
                temp =  numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;

            }
        }
    }

     printf("Second Highest number is %d \n",numbers[1]);


    return 0;
}
