#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,num;
    float *data;
    printf("enter totl numbr of element(1to100):");
    scanf("%d",&num);
    data=(float*)calloc(num,sizeof (float));
    if(data==NULL)
    {
        printf("error!");
        exit (0);
    }
    printf("\n");
    for(i=0;i<num;++i)
    {
        printf("entr numnr %d ",i+1);
        scanf("%f",data+i);
    }
    for(i=1;i<num;++i)
    {
        if(*data<*(data+i))
        {
            *data = *(data+i);
        }
    }
     printf("%.2f",*data);
    return 0;
}

