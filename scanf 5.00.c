#include<stdio.h>
int main()
{
    int var1,var2;
    printf("Please inter the number:");
    sacnf("%d",&var1);
    printf("Please inter the number:");
    scanf("%d",&var2);
    printf("%d+%d=%d\n",var1,var2,var1+var2);
    printf("%d-%d=%d\n",var1,var2,var1-var2);
    printf("%d*%d=%d\n",var1,var2,var1*var2);
    printf("%d/%d=%d\a",var1,var2,var1/var2);
    return 0;
}
//problem,
