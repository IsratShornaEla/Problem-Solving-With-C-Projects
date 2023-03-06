#include<stdio.h>
int oddeven(int n1);
int main()
{
    int a;
    scanf("%d",&a);
    if(oddeven(a)==1)
    {
        printf("even\n");
    }
    else{
        printf("o\n");
    }
    return 0;

}

int oddeven(int n1)
{
    if(n1%2==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
