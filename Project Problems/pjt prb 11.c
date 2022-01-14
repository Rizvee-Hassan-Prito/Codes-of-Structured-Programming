#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    gets(str);
    if(str[0]>=65 && str[0]<=90)
    {
    str[0]=str[0]+32;
    }
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i]==' ')
        {
            if(str[0]!=str[i+1])
            {
                printf("Not Tautogram.");
                return 0;
            }
        }
        i++;
    }
    printf("Tautogram.");
}
