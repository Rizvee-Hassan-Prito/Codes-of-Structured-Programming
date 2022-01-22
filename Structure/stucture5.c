#include<stdio.h>
struct people
{
    char name[60];
    int year;
};
int son_year(struct people f,struct people m)
{
  int d;
  d=(f.year+m.year)/4;
  return d;
}
int main()
{
    struct people x,y,z;
    scanf("%s%d%s%d%s",&x.name,&x.year,&y.name,&y.year,&z.name);
    z.year=son_year(x,y);
    printf("Father's Name:\n");
    printf("%s\n",x.name);
    printf("%d\n",x.year);
    printf("Mather's Name:\n");
    printf("%s\n",y.name);
    printf("%d\n",y.year);
    printf("Son's Name:\n");
    printf("%s\n",z.name);
    printf("%d\n",z.year);
}
