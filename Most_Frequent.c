#include<stdio.h>
int main()
{
    int n,i,j,count=0,m=0,b;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            count++;
        }
        if(count>m)
        {
            m=count;
            b=arr[i];
        }
        else if(count==m && arr[i]<b)
        b=arr[i];
        
        
    }
    printf("%d",b);
    return 0;
}