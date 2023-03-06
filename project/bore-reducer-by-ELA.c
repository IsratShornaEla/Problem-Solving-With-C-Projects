#include<stdio.h>

int main()
{
    int number,i,sum=0,h;
    int S,AT[100],ST[100],CE[100],SL[100],WT[100];
    scanf("%d",&S);
    printf("\n");

    for(i=0; i<S; i++)
    {
        scanf("%d %d",&AT[i],&ST[i]);
    }
    printf("\n");

    CE[0]=AT[0];
    SL[0]=CE[0]+ST[0];
    WT[0]=0;

    printf("St\tAT\tST\tCE\tSL\tWT\n");
    printf("%d\t%d\t%d\t%d\t%d\t%d\n",1,AT[0],ST[0],CE[0],SL[0],WT[0]);


    for(i=1; i<S; i++)
    {
        CE[i]=SL[i-1];
        SL[i]=CE[i]+ST[i];
        WT[i]=CE[i]-AT[i];
        sum=sum+WT[i];
        printf("%d\t%d\t%d\t%d\t%d\t%d\n",i+1,AT[i],ST[i],CE[i],SL[i],WT[i]);


    }

    printf("\nTotal  Waiting Time %d\n\n",sum);


    return 0;
}

