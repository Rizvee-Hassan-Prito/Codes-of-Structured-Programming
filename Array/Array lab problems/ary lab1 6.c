#include<stdio.h>
int main()
{
    int a[50];
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int max=-99999,idx;
     for(i=0;i<n;i++)
    {
        if(a[i]>=max)
        {
            max=a[i];
            idx=i;
        }
    }
    printf("%d\n",max);
    printf("%d",idx);
}
