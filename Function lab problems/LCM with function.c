#include<stdio.h>
int LCM(int x,int n)
{
    int i,gcd,max,lcm;
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
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int d=LCM(a,b);
    int e=LCM(d,c);
    printf("LCM: %d",e);
}
