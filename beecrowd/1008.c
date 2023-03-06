#include<stdio.h>
int main()
{
    int num,money;
    float hr,p;
    scanf("%d %d %f",&num,&money,&hr);
    printf("NUMBER = %d\n",num);
    p=money*hr;
    printf("SALARY = U$ %.2f\n",p);
    return 0;
}
