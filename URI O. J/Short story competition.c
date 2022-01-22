#include<stdio.h>
#include<string.h>
int main()
{
    char s[200];
    int i=0,c=0,x;
    float b,v,j,n,k;
    while(scanf("%f%f%f %[^\n]",&k,&n,&j,s)!=EOF)
    {
    while(s[i]!='\0')
    {
        c++;
        i++;
    }
    v=c/n;
    b=v/j;
    x=b;
    if(b-x!=0)
    {
       printf("%d",x+1);
    }
    else{ printf("%d",x);}
}
}
