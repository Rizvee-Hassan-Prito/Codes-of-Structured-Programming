#include<stdio.h>
int main()
{
    int a[50];
    int i,n,z,f;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("element-%d:",i);
        scanf("%d",&a[i]);
    }
     scanf("%d",&f);
     for(i=0;i<=n-1;i++)
     {
         if((f-1)==i)
         {
             printf("%d",a[i+1]);
             i++;
             continue;
         }
          printf("%d",a[i]);
     }
}
