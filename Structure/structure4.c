#include<stdio.h>
struct distance
{
    int inch;
    int feet;
};
struct distance cumulative(struct distance x,struct distance y)
{
    struct distance d;
    d.inch=x.inch+y.inch;
    d.feet=x.feet+y.feet;
    while(1)
    {
    if(d.inch>=12)
    {
        d.inch=d.inch-12;
        d.feet=d.feet+1;
    }
    if(d.inch<12)
    {
        break;
    }
    }
    return d;
}
int main()
{
    struct distance x,y,z;
    scanf("%d%d",&x.feet,&x.inch);
    scanf("%d%d",&y.feet,&y.inch);
    z=cumulative(x,y);
    printf("%d'%d''",z.feet,z.inch);
}
