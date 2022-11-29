#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,a[n];
    int c=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            c++;
        }
        else
        {
            printf("%d ",a[i]);
        }
    }
    for(i=0;i<c;i++)
    {
        printf("0 ");
    }
}
