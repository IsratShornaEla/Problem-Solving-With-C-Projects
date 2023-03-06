#include<stdio.h>

int main()
{
    int number;

    printf("Please enter the number of student --> ");
    scanf("%d",&number);
    printf("\n");

    int S[number],AT[number],ST[number],CE[number],SL[number],WT[number];

    for(int i=0;i<number;i++)
    {
        printf("\nEnter the arriving time --> ");
        scanf("%d",&AT[i]);
        printf("\nPlease enter the service time --> ");
        scanf("%d",&ST[i]);

    }


    CE[0]=AT[0];
    SL[0]=ST[0];
    WT[0]=0;
    int sum=0;
    printf("St\tAT\tST\tCE\tSL\tWT\n");
    printf("%d\t%d\t%d\t%d\t%d\t%d\n",1,AT[0],ST[0],CE[0],SL[0],WT[0]);
    for(int i=1;i<number;i++)
    {
        CE[i]=SL[i-1];
        SL[i]=CE[i]+ST[i];
        WT[i]=CE[i]-AT[i];
        sum=sum+CE[i];
        printf("%d\t%d\t%d\t%d\t%d\t%d\n",i+1,AT[i],ST[i],CE[i],SL[i],WT[i]);
    }
    printf("Total  Waiting Time %d",sum);


    return 0;
}

