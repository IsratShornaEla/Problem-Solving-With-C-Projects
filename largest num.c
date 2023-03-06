 #include<stdio.h>
 int main()
{
    int i,n,k;
    double a[100];
    printf("enter the total numbr of element(1 to 100):");
    scanf("%d",&n);
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("enter the number %d\n",i+1);
        scanf("%lf",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(k<a[i])
        {
            a[0]=a[i];
        }
    }
    printf("largest number %lf\n",k);
    return 0;
}
