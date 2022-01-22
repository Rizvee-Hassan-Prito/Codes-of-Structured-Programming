#include<stdio.h>
#include<string.h>
int main()
{
    while(1)
    {
    char s[500][500],q[500][500];
    int i=0,n=0,x=0,m=0,l=0,k=0,max=-99999;
    scanf("%d",&n);
    if(n==0)
    {return 0;}
    for(i=0;i<n;i++)
    {
        scanf("%s",s[i]);
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
