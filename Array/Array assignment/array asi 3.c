#include<stdio.h>
int main()
{
    int a[50];
    int b[50];
    int i,n,z,m;
    printf("1st array ");
    for (i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("2nd array ");
    for (m=0;m<5;m++)
    {
        scanf("%d",&b[m]);
    }
    for(i=0;i<5;i++)
       {
          printf(" %d ",a[i]);
       }
       for (m=0;m<5;m++)
    {
        printf(" %d ",b[m]);
    }
}
