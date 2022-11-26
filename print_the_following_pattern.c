#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j==i||i==(n-j+1))
            printf("x");
            else
            printf("0");
        }
        printf("
");
        
    }
    return 0;
}