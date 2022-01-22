#include<stdio.h>
#include<string.h>
int main()
{
    while(1)
    {
    char s[5000][50],q[5000][50];
    int i=0,n=0,x=0,m=0,l=0,flag,k=0,t,max=-99999;
    scanf("%d",&n);
    if(n==0)
    {return 0;}
    for(i=0;i<n;i++)
    {
       scanf(" %[^\n]",s[i]);
    }
    for(i=0;i<n;i++)
    {flag=0,m=0;
       for(t=0;s[i][t]!='\0';t++)
       {
           if(s[i][t]==' '&& flag==1 && s[i][t-1]==' '){continue;}
           if(s[i][t]==' '){flag=1;}
           s[i][m]=s[i][t];
           m++;
       }
       s[i][m]='\0';
    }
    for(i=0;i<n;i++)
    {
        l=strlen(s[i]);
        if(l>max)
        {
            max=l;
        }
    }
 for(i=0;i<n;i++)
 {
     if(strlen(s[i])!=max)
     {
         l=max-strlen(s[i]);
        for(k=0;k<l;k++)
        {
            q[i][k]=' ';
        }
        for(x=0;x<strlen(s[i]);x++)
        {
            q[i][k]=s[i][x];
            k++;
        }
            q[i][k]='\0';
     }
     else
     {
         x=0;
         for(k=0;k<max;k++)
         {
             q[i][k]=s[i][x];
             x++;
         }
         q[i][k]='\0';
     }
 }
 for(i=0;i<n;i++)
    {
        printf("%s\n",q[i]);
    }
    printf("\n");
}
}
