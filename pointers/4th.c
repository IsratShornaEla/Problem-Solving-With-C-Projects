#include<stdio.h>
int main()
{
    int var=5;
    printf("value of var %d\n",var);
    printf("ADDRESS :%u\n\n",&var);

    int *pc;
    printf("value of  p %d\n",pc);
    printf("ADDRESS :%u\n\n",&pc);


    pc=&var;
    *pc=10111;
    printf("value of var %d\n",var);
    printf("ADDRESS :%u\n\n",&var);


    return 0;
}
