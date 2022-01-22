#include<stdio.h>
struct Point
{
    float x;
    float y;
};
struct Point gettopmostpoint(struct Point d,struct Point c)
{
    if(d.y>c.y)
    {
        return d;
    }
    return c;
}
int main()
{
    struct Point a[50],c,d;
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%f%f",&a[i].x,&a[i].y);
    }
    c=a[0];
    i=1;
    while(i<n)
    {
        d=gettopmostpoint(c,a[i]);
        c=d;
        i++;
    }
    printf("%f%f",d.x,d.y);
}
