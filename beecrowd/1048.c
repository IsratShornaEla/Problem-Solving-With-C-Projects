#include<stdio.h>
int main()
{
    float S,x,y;
    scanf("%f",&S);
    if(S>=0 && S<=400.00)
    {
        y=S*15/100;
        x=S+y;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %c\n",x,y,'%');
    }
    else if(S>=400.01 && S<=800.00)
    {
        y=S*12/100;
        x=S+y;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %c\n",x,y,'%');
    }
    else if(S>=800.01 && S<=1200.00)
    {
        y=S*10/100;
        x=S+y;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %c\n",x,y,'%');
    }
    else if(S>=1200.01 && S<=2000.00)
    {
        y=S*7/100;
        x=S+y;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %c\n",x,y,'%');
    }
    else
    {
        y=S*4/100;
        x=S+y;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %c\n",x,y,'%');
    }
    return 0;
}
