#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[40];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int c,even=0,odd=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            even=even+arr[i];
        }
        else
        {
            odd=odd+arr[i];
        }
    }
    if(odd>even)
    c=odd-even;
    else
    c=even-odd;
    printf("%d",c);
    return 0;
}