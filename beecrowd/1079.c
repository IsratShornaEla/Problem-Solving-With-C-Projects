#include<stdio.h>
int main()
{
    int N,i;
    float x,y,z,avg;
    scanf("%d",&N);
    for(i=0; i<N; i++)
    {
        scanf("%f %f %f",&x,&y,&z);
        avg=((x*2)+(y*3)+(z*5))/(2+3+5);
        printf("%.1f\n",avg);
    }
    return 0;
}
