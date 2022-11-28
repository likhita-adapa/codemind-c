#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int p=0;
    for(i=1;i<n;i++)
    {
        if((arr[i]-arr[i-1])>0)
        {
            p=p+(arr[i]-arr[i-1]);
        }
        //printf("%d",arr[i]-arr[i-1]);
    }
    printf("%d",p);
}
