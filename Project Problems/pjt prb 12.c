#include<stdio.h>
#include<string.h>
int main()
{
    char s[5000],q[5000],r[5000];
    int i=0,n,a=0,b=0,c,f,d=0,e;
    gets(s);
    while(s[i]!='\0')
    {
        if(s[i]==' ')
        {
          q[a]=s[i-1];
          a++;
          r[b]=s[i+1];
          b++;
        }
        i++;
    }
    q[a]=s[i-1];a++;
    q[a]='\0';r[b]='\0';
    b=0;
    while(r[b]!='\0')
    {e=0,c=0,a=0,f=0;
        while(r[e]!='\0')
        {
            if(r[b]==r[e])
            {
                c++;
            }
            e++;
        }
        while(q[a]!='\0')
        {
            if(q[a]==r[b])
            {
                f++;
                //if(f>1)
                //{f=f-1;}
            }
            a++;
        }
        if(c!=f)
        {
            printf("NO.");
            return 0;
        }
      b++;
    }
    printf("YES.");
}
