#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,x,sum=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        x=sqrt(arr[i]);
        if(x*x==arr[i])
        sum=sum+arr[i];
    }
    printf("%d",sum);
    return 0;
}