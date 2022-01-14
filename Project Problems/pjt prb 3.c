#include<stdio.h>
#include<string.h>
int power(int n,int x)
{
    int d=1,i;
    for(i=1;i<=x;i++)
    {
        d=d*n;
    }
    return d;
}
int main()
{
   char str[100],qtr[100],gtr[100],mtr[100],ntr[100];
   int n=0,c,z=0,sum,sum1;
   gets(str);
   gets(qtr);
   while(qtr[n]!='\0')
   {
    int m=0,k=0;
   while(qtr[n]!='\0')
   {
       gtr[m]=qtr[n];
       m++;
       n++;
       if(qtr[n]=='.')
       {break;}
   }
    while(str[z]!='\0')
    {
        ntr[k]=str[z];
        k++;
        z++;
        if(str[z]=='.')
       {break;}
    }
    z++;
   ntr[k]='\0';
   gtr[m]='\0';
   m=0,sum=0;
   strrev(gtr);
   while(gtr[m]!='\0')
   {
       sum=sum+((gtr[m]-48)*power(2,m));
       m++;
   }
   c=0,n=n+1;
   while(sum!=0)
   {
       sum1=sum%10;
       sum=sum/10;
       mtr[c]=sum1+48;
       c++;
   }
   mtr[c]='\0';
   strrev(mtr);
   if(strcmp(ntr,mtr)==1)
   {printf("NO");return 0;}
}
   printf("YES");
}


