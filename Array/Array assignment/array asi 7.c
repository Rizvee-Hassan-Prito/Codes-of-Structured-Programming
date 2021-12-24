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
    printf("The even elements are:\n");
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
            {
                printf(" %d ",a[i]);
            }
    }
    printf("\nThe odd elements are:\n");
    for(i=0;i<n;i++)
        {
        if(b[i]%2!=0)
            {
                printf(" %d ",b[i]);
            }
        }
}

