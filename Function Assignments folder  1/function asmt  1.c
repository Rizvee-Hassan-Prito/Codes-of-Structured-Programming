#include<stdio.h>
int getArea(int radius)
{
    int a;
    a=3.1416*radius*radius;
    return a;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("Area of the circle:\n");
    printf("%d",getArea(n));
}
