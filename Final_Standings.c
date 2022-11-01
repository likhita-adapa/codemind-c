#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d %d ",&n,&k);
    int a[n];
    for(int i=0;i<n+1;i++)
    {
        a[i]=0;
    }
    a[0]=1;
    a[1]=k-1;
    for(int i=2;i<n+1;i++)
    {
        a[i]=(k-1)*(a[i-1]+a[i-2]);
    }
    printf("%d ",a[n]);
}

