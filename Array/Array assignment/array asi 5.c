#include<stdio.h>
int main()
{
    int a[50];
    int b[50];
    int i,n,z;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("element-%d:",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        b[i]=a[i];
    }
    printf("The element stored in the first array:");
    for (i=0;i<n;i++)
    {
    printf("\n %d ",a[i]);
    }
    printf("\nThe element copied in the second array:");
   for (i=0;i<n;i++)
    {
    printf("\n %d ",b[i]);
    }
}
