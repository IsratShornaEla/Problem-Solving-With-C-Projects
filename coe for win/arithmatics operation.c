#include<stdio.h>
int main()
{
    int a,b;
    float cast;
    scanf("%d %d",&a,&b);
    printf("addition = %d\n",a+b);

     printf("subtruction = %d\n",a-b);
      printf("multification = %d\n",a*b);
 cast=(float)a/b;
       printf("quotient = %lf\n",cast);

        printf("modulus = %d\n",a%b);

    return 0;
}

/*
#include<stdio.h>
int main()
{

    float a,b;
    int sum;
    scanf("%lf ,%lf",&a,&b);
    sum=(int)(a+.04);
    printf("sum = %d\n",sum);
    return 0;
}
*/
