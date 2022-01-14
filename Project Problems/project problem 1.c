#include<stdio.h>
#include<string.h>
int  main()
{
    char str[50];
    int n,i=0,x;
    scanf("%d%d",&n,&x);
    while(n!=0)
    {
        str[i]=(n%x)+48;
        i++;
        n=n/x;
    }
    str[i]='\0';
    strrev(str);
    printf("%s",str);
}
