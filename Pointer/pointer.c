#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,sum=0,t,*p;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",(p+i));
    }
  for(i=0;i<n;i++)
    {
       sum=sum+*(p+i);
    }
printf("%d",sum);

}
