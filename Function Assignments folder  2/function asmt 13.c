#include<stdio.h>
int size=0;
int delNeg(int a[],int n)
{
   int i,b[50];
   for(i=0;i<n;i++)
   {
       if(a[i]>=0)
       {
         a[size]=a[i];
         size++;
       }
   }
}
int main()
{
    int a[50];
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    delNeg(a,n);
     for(i=0;i<size;i++)
   {
      printf("%d",a[i]);
   }
}
