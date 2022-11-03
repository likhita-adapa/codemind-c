#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    for(int p=0;p<x;p++)
    {
        int n,m;
        scanf("%d %d",&n,&m);
        int a[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(int i=0;i<m;i++)
        {
            int temp=a[n-1];
            for(int j=n-1;j>0;j--)
            {
                a[j]=a[j-1];
            }
            a[0]=temp;
        }
        for(int i=0;i<n-1;i++)
        {
            printf("%d ",a[i]);
        }
        printf("%d
",a[n-1]);
    }
}

