#include<stdio.h>
#include<string.h>
int main()
{while(1)
{
    char s[500],a[500];
    gets(s);
    int i=0;
    while(s[i]!='\0')
    {
        if ((s[i]>=65 && s[i]<=90)||(s[i]>=97 && s[i]<=122))
        {
            if((s[i]+13)>90 && s[i]>=65 && s[i]<=90 || ((s[i]+13)>122 && s[i]>=97 && s[i]<=122))
            {a[i]=s[i]-13;
            }
            else{a[i]=s[i]+13;}
        }
        else{a[i]=s[i];}
        i++;
    }
    a[i]='\0';
 printf("%s",a);
}
}
