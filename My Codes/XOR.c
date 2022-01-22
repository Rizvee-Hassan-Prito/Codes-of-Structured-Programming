#include<stdio.h>
#include<string.h>
int main()
{
    while(1){
    printf("\nEnter The Binary number:\n");
    char s[100];
    scanf("%s",s);
    int d=strlen(s),i;
    char x=s[0];
    for(i=1;i<d;i++)
    {
        if(x==s[i]){x='0';}
        else{x='1';}
    }
    printf("XOR of all bits= %c",x);
    }
}
