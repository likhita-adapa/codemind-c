#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[40],i,odd=0,c;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int even=0;
    for(i=0;i<n;i++)
    {
        //even=arr[0];
        if(i%2==0)
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