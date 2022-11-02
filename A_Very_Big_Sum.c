#include<stdio.h>
int main()
{
    long int n,i,sum=0;
    scanf("%ld",&n);
    long int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%ld",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    printf("%ld",sum);
    return 0;
}