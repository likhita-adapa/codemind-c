#include<stdio.h>
int main()
{
    int n,c=0,k;
    scanf("%d",&n);
    int a[n],i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        k=a[i];
        for(j=0;j<n;j++)
        {
            if(k==a[j])
            {
                c++;
            }
        }
        if(c>n/2)
        {
            printf("%d",a[i]);
            break;
        }
    }
}

