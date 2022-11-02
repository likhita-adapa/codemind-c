#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int c=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i]!=INT_MAX)
            {
                if(i!=j)
                {
                    if(a[i]==a[j])
                    {
                        c++;
                        a[i]=INT_MAX;
                    }
                }
            }
        }
    }
    printf("%d",c+n);
}

