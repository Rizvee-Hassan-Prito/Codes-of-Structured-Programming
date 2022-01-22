#include<stdio.h>
#include<string.h>
int main()
{
    char a[500];
    gets(a);
    //scanf(" %[^\n]",a);
         int i=0,c=0,f=0,x=0,y=0,v=0,flag;
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
     char s[50][500];
     while(a[i]!='\0')
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
    while(y<x)
    {flag=0,f=0;
        while(s[y][f]!='\0')
        {
            if(s[y][f]=='.'|| s[y][f]>=48 && s[y][f]<=57)
            {
                flag=1;
                break;
            }
            f++;
        }
        if(flag==0)
          {v++;}
        y++;
    }
    if((c/v)<=3)
    {
        printf("250");
    }
    else if((c/v)<=5)
    {
        printf("500");
    }
    else{printf("1000");}
}
/*#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    while(scanf(" %[^\n]",s)!=EOF)
    {
    int l=strlen(s),i=0,n=0;
    while(i<l)
    {
        if(s[i]==' ')
        {
            n++;
        }
        i++;
    }
    printf("%d\n",n+1);
    }
}*/
