#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,j,s=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    i=0;
    x:
    s=s+arr[i];
    i++;
    if(i<n)
    {
        goto x;
    }
    printf("%d",s);
}