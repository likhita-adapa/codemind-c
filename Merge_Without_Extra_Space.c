#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    for(int p=0;p<x;p++)
    {
        int n,m,temp;
        scanf("%d %d",&n,&m);
        int a[n+m];
        for(int i=0;i<m+n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(int i=0;i<m+n;i++)
        {
            for(int j=1;j<m+n;j++)
            {
                if(a[j-1]>a[j])
                {
                    temp=a[j-1];
                    a[j-1]=a[j];
                    a[j]=temp;
                }
            }
        }
        for(int i=0;i<m+n;i++)
        {
        if(i<m+n-1)
        {
         printf("%d ",a[i]);
        }
        else
        {
            printf("%d",a[i]);
        }
        }
        printf("
");
    }
}

