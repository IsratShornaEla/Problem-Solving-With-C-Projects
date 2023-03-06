#include<stdio.h>
int main()
{double sum=0;
int count=5,round=7;
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
    for(i=7; i<12; i++)
    {
for(j=count; j<round; j++)
        {
             sum+=(n[i][j]);
        }
        count--;
        round++;

}
     if(x[0]=='S')
            printf("%.1lf\n",sum);
else if(x[0]=='M')
            printf("%.1lf\n",sum/30.0);
    return 0;
}


