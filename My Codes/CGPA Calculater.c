#include<stdio.h>
#include<string.h>
int main()
{
    char s[50][50],Z2[]={'A','+','\0'},z2[]={'A','\0'},z4[]={'A','-','\0'},z5[]={'B','+','\0'},z6[]={'B','\0'},z7[]={'B','-','\0'},z8[]={'C','+','\0'},z9[]={'C','\0'},z10[]={'C','-','\0'},z11[]={'D','+','\0'},z12[]={'D','\0'},z13[]={'F','\0'};
    int i,n;
    float a[50],sum1=0,sum2=0;
    printf("\n\nEnter how many subjects you take:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter your subject GRADE:\n");
        scanf(" %[^\n]",s[i]);
        printf("Enter your that subject's CREDIT:\n");
        scanf("%f",&a[i]);
        sum2=sum2+a[i];
    }
   for(i=0;i<n;i++)
   {
       if(strcmp(s[i],z2)==0|| strcmp(s[i],Z2)==0)
       {
           sum1=sum1+(4*a[i]);
       }
       else if(strcmp(s[i],z4)==0)
       {
           sum1=sum1+(3.70*a[i]);
       }
       else if(strcmp(s[i],z5)==0)
       {
           sum1=sum1+(3.30*a[i]);
       }
       else if(strcmp(s[i],z6)==0)
       {
           sum1=sum1+(3.00*a[i]);
       }
       else if(strcmp(s[i],z7)==0)
       {
           sum1=sum1+(2.70*a[i]);
       }
       else if(strcmp(s[i],z8)==0)
       {
           sum1=sum1+(2.30*a[i]);
       }
       else if(strcmp(s[i],z9)==0)
       {
           sum1=sum1+(2.00*a[i]);
       }
       else if(strcmp(s[i],z10)==0)
       {
           sum1=sum1+(1.70*a[i]);
       }
       else if(strcmp(s[i],z11)==0)
       {
           sum1=sum1+(1.30*a[i]);
       }
       else if(strcmp(s[i],z12)==0)
       {
           sum1=sum1+(1.00*a[i]);
       }
       else if(strcmp(s[i],z13)==0)
       {
           sum1=sum1+(0.00*a[i]);
       }
       else
       {
           printf("This is not a grade point");
           return 0;
       }
   }
   printf("\nYOUR CGPA IS\n%.2f\n",sum1/sum2);
}
