#include<stdio.h>
int getLCM(int x,int n)
{
    int i,min,max,lcm;
    for(i=1;i>0;i++)
    {
        if(i%x==0 && i%n==0)
        {
            lcm=i;
            break;
        }
    }
    return lcm;
}
int main()
{
    int a,b,c,d,e;
    printf ("Enter three numbers:\n");
    scanf("%d%d%d",&a,&b,&c);
    d=getLCM(a,b);
    e=getLCM(d,c);
    printf ("lcm of the three numbers:\n%d",e);
}
