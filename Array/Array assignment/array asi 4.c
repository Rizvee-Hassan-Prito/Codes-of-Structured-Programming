#include<stdio.h>
int main()
{
    int a[50];
    int i,b=0,z,f;
    for (i=0;i<4;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&z);
    scanf("%d",&f);
    a[z+1]=a[z];
    a[z]=f;

        for (i=0;i<=4;i++)
    {
        printf(" %d ",a[i]);
    }
}

