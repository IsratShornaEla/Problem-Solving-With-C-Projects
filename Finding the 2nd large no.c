 #include<stdio.h>
 int main()
{
    int i,n;
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
        if(a[0]<a[i])
        {
            a[1]=a[0];
            a[0]=a[i];

        }
        else if(a[0]>a[i] && a[1]<a[i])
        {
            a[1]=a[i];
        }
    }
    printf("largest number %lf\n",a[0]);
    return 0;
}
