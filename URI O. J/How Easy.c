#include<stdio.h>
#include<string.h>
int main()
{
    char a[50];
    while(scanf(" %[^\n]",a)!=EOF)
    {
         int i=0,c=0,f=0,x=0,v=0,flag;
         while(a[i]!='\0')
         {
             if(a[i]!='.' && a[i]!=' ')
             {
                 c++;
             }
             i++;
         }
         if(a[i-1]=='.')
         {a[i-1]='\0';}
         i=0;
         int l=strlen(a);
     char s[50][500];
     while(i<l)
     {
         s[x][f]=a[i];
         f++;
         i++;
         if(a[i]==' ' || a[i]=='\0')
         {
            s[x][f]='\0';
            f=0;
            x++;
            i++;
         }
     }
     int y=0;
    while(y<x)
    {flag=0,f=0;
        while(s[y][f]!='\0')
        {
            if(s[y][f]=='.'|| s[y][f]>=48 && s[y][f]<=57)
            {
                flag=1;
            }
            f++;
        }
        if(flag==0)
          {v++;}
        y++;
    }
    if(v==0||(c/v)<=3)
    {
        printf("250");
    }
    else if((c/v)<=5)
    {
        printf("500");
    }
    else{printf("1000");}
    }
}

