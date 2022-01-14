#include<stdio.h>
int main()
{
     int a[500];
     int i,n,m,t;
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
         scanf("%d",&a[i]);
     }
     scanf("%d",&m);
     for(i=0;i<n-1;i++)
     {
         t=i+1;
         while(t<n)
         {
            if(a[i]+a[t]==m)
            {
                printf("%d and %d",i+1,t+1);
                return 0;
            }
            t++;
         }
     }
     printf("CAN'T BUY");
}
