#include<stdio.h>
int main()
{
    int a[50];
    int i,n,cnt=0,cnta=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            cnt++;
        }
        else
        {
            cnta++;
        }
    }
    if(cnt>cnta)
    {
        printf("mjr neg");
    }
    else if(cnt==cnta)
    {
        printf("neutral");
    }
    else{printf("mjr pos");}
}
