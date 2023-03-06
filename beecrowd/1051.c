#include<stdio.h>
int main()
{
    float x;
    scanf("%f",&x);
    if(x>=0 && x<=2000.00)
    {
        printf("Isento\n");
    }
    else if(x>=2000.01 && x<=3000.00)
    {
        x=x-2000.00;
        x=x*8/100;
        printf("R$ %.2f\n",x);
    }
    else if(x>=3000.01 && x<=4500.00)
    {
        x=x-3000.00;
        x=x*18/100;
        printf("R$ %.2f\n",x+80);
    }
    else
    {
        x=x-4500.00;
        x=x*28/100;
        printf("R$ %.2f\n",x+270+80);

        return 0;
    }
}
