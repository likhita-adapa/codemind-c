#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,even=0,odd=0,diff,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            even=even+arr[i];
        }
        else if(i%2!=0)
        {
            odd=odd+arr[i];
        }
    }
    diff=abs(even-odd);
    if(diff%4==0)
    {
        printf("X");
        
    }
    else
    {
        printf("Y");
    }
    return 0;
}