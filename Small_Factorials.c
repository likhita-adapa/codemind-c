#include<stdio.h>
int main()
{
    int i,t,n,fact=1;
    scanf("%d",&t);
    while(t>0)
    {
        fact=1;
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            fact=fact*i;
        }
        printf("%d",fact);
        printf("
");
        t--;
    }
    return 0;
}