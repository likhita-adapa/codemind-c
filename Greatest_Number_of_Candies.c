#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,max=0,s,c;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    int t;
    scanf("%d",&t);
    for(i=0;i<n;i++)
    {
        if((arr[i]+t)>=max)
        {
            printf("True ");
        }
        else
        {
            printf("False ");
        }
    }
}