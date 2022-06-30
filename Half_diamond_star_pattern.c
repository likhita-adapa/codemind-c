#include<stdio.h>
int main ()
{
    int n,i,j;
    scanf("%d",&n);
    if(n>=3&&n<=100)
    {
     for(i=1;i<=n;i++)
     {
        for(int k=1;k<=i;k++)
        {
         printf("*");
        }
       printf("
");
     }
     for(j=n-1;j>=1;j--)
     {
        for(int l=j;l>=1;l--)
        {
            printf("*");
        }
        printf("
");
     }
    }
    else
    {
        printf("The pattern is not possible");
    }
    return 0;
}
 