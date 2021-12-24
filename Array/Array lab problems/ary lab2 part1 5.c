#include<stdio.h>
int main()
{
    int a[50],b[50];
    int i,n,m,size=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        b[i]=a[n-1-i];
    }
    int flag=0;
     for(i=0;i<n;i++)
    {
        if(a[i]!=b[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("palindrome");
    }
    else
    {
        printf("not palindrome");
    }
}
