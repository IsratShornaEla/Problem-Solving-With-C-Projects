#include<stdio.h>
int main()
{
    float X,Y,Z;
    int N,i;
    scanf("%d",&N);
    for(i=0; i<N; i++)
    {
        scanf("%f %f",&X,&Y);
        Z=X/Y;
        if(Y==0)
        {
            printf("divisao impossivel\n");
        }
        else
        {
            printf("%.1f\n",Z);
        }
    }
    return 0;
}
