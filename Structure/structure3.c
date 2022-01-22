#include<stdio.h>
struct dates
{
    int x,y,z;
};
int main()
{
    struct dates date1,date2;
    scanf("%d%d%d",&date1.x,&date1.y,&date1.z);
    scanf("%d%d%d",&date2.x,&date2.y,&date2.z);
    if(date1.x==date2.x && date1.y==date2.y && date1.z==date2.z)

        printf("dates are equal");
    else
        printf("dates are not equal");
}
