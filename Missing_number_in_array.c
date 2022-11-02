#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    for(int j=0;j<x;j++)
    {
        int n,tot,sum=0;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n-1;i++)
        {
            scanf("%d",&a[i]);
        }
        tot=n*(n+1)/2;
        for(int i=0;i<n-1;i++)
        {
            sum=sum+a[i];
        }
        printf("%d
",tot-sum);
    }
}

