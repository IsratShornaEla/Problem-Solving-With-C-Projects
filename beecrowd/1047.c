#include<stdio.h>
int main()
{
    int a,m1,b,m2;
    scanf("%d %d %d %d",&a,&m1,&b,&m2);
    if(m1>m2)
    {
        if(a>b)
        {
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",24-(a-b)-1,60-(m1-m2));
        }
        else if(a<b)
        {
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",b-a-1,60-(m1-m2));
        }
        else
        {
            printf("O JOGO DUROU 23 HORA(S) E %d MINUTO(S)\n",60-(m1-m2));
        }
    }
    else
    {
        if(a>b)
        {
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",24-(a-b),m2-m1);
        }
        else if(a<b)
        {
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",b-a,m2-m1);
        }
        else
        {
            printf("O JOGO DUROU 24 HORA(S) E %d MINUTO(S)\n",m2-m1);
        }
    }

    return 0;
}
