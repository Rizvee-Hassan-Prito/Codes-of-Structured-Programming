#include<stdio.h>
#include<string.h>
int main()
{
    char s[10][100],q[50];
    int i,n,d=0,c,k,f,w;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf(" %[^\n]",s[i]);
    }
    //for eating too much of one type of food
    c=0;
    while(s[0][c]!='\0')
    {
        f=0,i=1;
        while(i!=n)
        {w=0;
        while(s[i][w]!='\0')
        {
            if(s[i][w]==s[0][c])
            {
                f++;
            }
            w++;
        }
         if(f>1)
        {printf("CHEATER");return 0;}
        i++;
        }
        c++;
    }
    //for eating some food that is not in the dietPlan
    i=1;
    while(i!=n)
    {
        w=0,f=0;
        while(s[i][w]!='\0')
        {c=0;
        while(s[0][c]!='\0')
        {
            if(s[i][w]==s[0][c])
            {
                f=1;
                break;
            }
            c++;
        }
        if(f==0)
        {
            printf("CHEATER");
            return 0;
        }
        w++;}
        i++;
    }
    c=0;
    while(s[0][c]!='\0')
    {
        w=0,f=0,i=1;
        while(i<n)
        {
        while(s[i][w]!='\0')
        {
            if(s[i][w]==s[0][c])
            {
                f=1;
            }
            w++;
        }
        i++;
        w=0;
        }
        if(f==0)
            {
                q[d]=s[0][c];
                d++;
            }
        c++;
    }
    q[d]='\0';
    int t,l=0;
    while(l!=d)
    {
    for(i=0;i<d-1;i++)
    {
        if(q[i]>q[i+1])
        {
          t=q[i+1];
          q[i+1]=q[i];
          q[i]=t;
        }
    }
    l++;
    }
    for(i=0;i<d;i++)
    {
        printf("%c",q[i]);
    }
}
