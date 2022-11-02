#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],k=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int j;
    for(j=1;j<n+1;j++)
    {
        k=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==j)
            {
                k=1;
                break;
            }
        }
        if(k==0)
        {
            printf("%d",j);
            break;
        }
    }
}