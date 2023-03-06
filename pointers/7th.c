#include<stdio.h>
int main()
{
    int *pc;
    int c=22;
    printf("adress of c : %u\n",&c);
    printf("value of c : %d\n\n",c);

    pc=&c;
    printf("address of pointer pc:%u\n",pc);
    printf("content of pointer pc :%d\n\n",*pc);

    c=11;
    printf("address of pointer pc:%u\n",pc);
    printf("content of pointer pc :%d\n\n",*pc);


    *pc=2;
    printf("adress of c : %u\n",&c);
    printf("value of c : %d\n\n",c);

    return 0;
}

