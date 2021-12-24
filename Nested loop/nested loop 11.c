#include <stdio.h>
int main()
{
    int n,i,a,c,cnt;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        cnt=0;
        for(a=1;a<=i-1;a++)
        {
            printf("0");
            cnt++;
        }
      printf("%d",cnt);
       for(c=1;c<=n-i;c++)
      {
          printf("0");
      }
        printf("\n");
    }
}
