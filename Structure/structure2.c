#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct people
{
    char name[100];
    int acnt_number;
    int balance;
    char inform[100];
};
int main()
{
    struct people a[50];
    int i,n,indx;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s%d%d%s",&a[i].name,&a[i].acnt_number,&a[i].balance,&a[i].inform);
    }
    for(i=0;i<n;i++)
    {
    if(a[i].balance>1000)
    {
        a[i].balance=a[i].balance+100;
        printf("%s\n",a[i].name);
        printf("%d\n",a[i].balance);
    }
    }
}
