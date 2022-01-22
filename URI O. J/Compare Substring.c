#include<stdio.h>
#include<string.h>
int main()
{
    char a[500],b[500];
    gets(a);
    gets(b);
    int i=0,j,x,y,k=0,l,max=-99999;
    while(a[i]!='\0')
    {
        j=0,k=0;
        while(b[j]!='\0')
        {
            if(a[i]==b[j])
            {
                k=1;
                x=1;
                while(a[i+x]==b[j+x])
                {
                    k++;
                    x++;
                    if(a[i+x]=='\0'){break;}
                }
            }
            j++;
        }
        i++;
        getchar();
        if(k>max)
        {
            max=k;
        }
    }
printf("%d",max);
}
