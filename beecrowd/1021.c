#include<stdio.h>
int main()
{
    float a;
    scanf("%lf",&a);
    printf("%d:\n",a);
    printf("%lf nota(s) de R$ 100.00\n",a/100);
    a=a%100;
    printf("%lf nota(s) de R$ 50.00\n",a/500);
    a=a%50;
    printf("%lf nota(s) de R$ 20.00\n",a/20);
    a=a%20;
    printf("%lf nota(s) de R$ 10.00\n",a/10);
    a=a%10;
    printf("%lf nota(s) de R$ 5.00\n",a/5);
    a=a%5;
    printf("%lf nota(s) de R$ 2.00\n",a/2);
    a=a%2;
    printf("MOEDAS:\n");
    printf("%lf moeda(s) de R$ 1.00\n",a/1);
    a=a%1;
    printf("%lf moeda(s) de R$ 0.50\n",a/.05);
    a=a%.05;
    printf("%lf moeda(s) de R$ 0.25\n",a/.25);
    a=a%.25;
    printf("%lf moeda(s) de R$ 0.10\n",a/.10);
    a=a%.10;
    printf("%lf moeda(s) de R$ 0.05\n",a/.05);
    a=a%.05;
    printf("%lf moeda(s) de R$ 0.01\n",a/.01);
    eturn 0;
}
