#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],x=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(x<a[j]-a[i])
            {
                x=a[j]-a[i];
            }
        }
    }
    printf("%d",x);
}
