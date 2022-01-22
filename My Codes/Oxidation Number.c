#include<stdio.h>
#include<string.h>
int main()
{
    float i,n,m,g,b,f,k,sum;
    printf("enter the oxidation number of the compound:\n");
    scanf("%f",&b);
    sum=-b;
    printf("enter how many times unknown O.N. element is presented:\n");
    scanf("%f",&g);
    printf("enter how many known O.N. elements you have:\n");
    scanf("%f",&n);
    for(i=0;i<n;i++)
    {
        printf("enter the oxidation number of the known element:\n");
        scanf("%f",&f);
        printf("enter how many times it is presented:\n");
        scanf("%f",&k);
        for(m=0;m<k;m++)
        {
            sum=sum+f;
        }
    }
    printf("The oxidation number of the unknown element is \n%f\n",(-sum)/g);
}
