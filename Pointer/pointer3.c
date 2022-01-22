#include<stdio.h>
int pointer(int *p,int *q)
{
    int temp;
    temp=p;
    p=q;
    q=temp;
    printf("a=%d\nb=%d",*p,*q);
}
int main()
{
    int *p,*q;
    int a,b;
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    pointer(&a,&b);
}
