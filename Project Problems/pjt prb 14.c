#include<stdio.h>
#include<string.h>
int main()
{
    char s[500],q[500];
    int i,x,c,b,d,w;
    gets(s),gets(q);
    x=strlen(s),c=strlen(q);
    if (x==c)
    {
      b=0,c=0;
      for(i=0;i<x;i++)
      {   w=0;
          while(s[w]!='\0')
          {
            if(s[i]==s[w])
            {c++;}
            w++;
          }
          w=0;
          while(q[w]!='\0')
          {
            if(s[i]==q[w])
            {b++;}
            w++;
          }
          if(c!=b)
          {
              printf("They are not anagrams.");
              return 0;
          }
      }
    }
 else{printf("They are not anagrams.");return 0;}
 printf("They are anagrams.");
}
/*#include<stdio.h>
#include<math.h>
int main()
{
    int i=0,n;
    scanf("%d",&n);
    while(i!=n)
    {
        if((pow(2,pow(2,i)))+1==n)
        {
            printf("Fermat number");
            return 0;
        }
        i++;
    }
    printf("Not Fermat number");
}
#include<stdio.h>
#include<math.h>
int main()
{
    int x,i,f;
    scanf("%d",&x);
    for(i=0;1;i++)
    {
        f=pow(2,2*i)+1;
        if(i<=x)
        {
            if(f==x)
            {
                printf("Fermat");
                break;
            }
        }
        else{printf("not Fermat"); break;}
    }
}
