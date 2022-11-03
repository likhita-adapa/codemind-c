#include<stdio.h>
int main()
{
    int n,i,j,k=0,r,temp;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        r=arr[i]*arr[i];
        arr[k]=r;
        k++;
    }
    for(i=0;i<k-1;i++)
    {
        for(j=0;j<k-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(i=0;i<k;i++)
    {
        printf("%d ",arr[i]);
    }
}