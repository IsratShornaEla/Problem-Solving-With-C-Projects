#include<stdio.h>
int main()
{double sum=0;
int count=1;
    int i,j,m;
    double n[12][12];
    char x[2];
    scanf("%c",&x);
    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            scanf("%lf",&n[i][j]);
        }
    }
    for(i=0; i<12; i++)
    {


        for(j=count; j<12; j++)
        {
             sum+=(n[i][j]);

        }
        count++;


    }
     if(x[0]=='S')
            printf("%.1lf\n",sum);

         else if(x[0]=='M')
            printf("%.1lf\n",sum/66.0);
    return 0;
}
