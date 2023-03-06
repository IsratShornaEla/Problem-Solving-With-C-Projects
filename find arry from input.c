#include<stdio.h>
int main()
{
    int n1,n2,i,j;
    system("COLOR 5B");
    printf("enter the numbr of element >> ");
    scanf("%d",&n1);

     getch();
    system("cls");
    system("COLOR 3F");
    printf("enter thr numr that need to find its ary index : ");
    scanf("%d",&n2);
    int ar[n1];
    printf("\n\n");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&ar[n1]);

        if(ar[n1]==n2)
        {
          printf("\nthe index bla bla bla >>>>%d\n",i);
            break;
        }
    }

    return 0;
}
