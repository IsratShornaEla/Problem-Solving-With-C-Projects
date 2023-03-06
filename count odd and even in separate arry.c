#include<stdio.h>
int main()
{
    int a[100],b[100],c[100],i,n,j=0,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            b[j]=a[i];
            j++;
        }
        else{
            c[k]=a[i];
            k++;
        }
    }
    printf("even numers --->> ");
    for(i=0;i<j;i++)
    {
        printf("%d ",b[i]);
    }
    printf("\n\n");
    printf("odd numbers-->> ");
   for(i=0;i<k;i++)
    {
        printf("%d ",c[i]);
    }
    printf("\ntotal even numbrs are =%d\ntotal odd numbers are=%d\n",j,k);

}
