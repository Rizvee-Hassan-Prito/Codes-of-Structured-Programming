#include<stdio.h>
int main()
{
    int a[50];
    int i,n;
    float sum=0,avg;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    avg=sum/n;
    printf("%f\n%.4f",sum,avg);
}
