#include<stdio.h>
int checkPrimeNumber(int n)
{
    int i,flag=0;

    for(i=2;i<=n/2;++i)
    {
        if(n%2==0)
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        printf(" not prime\n");
    }
    else
    {
        printf

        ("prmn\n");
    }

    int main()
{
    checkPrimeNumber(3);
    return 0;

}

