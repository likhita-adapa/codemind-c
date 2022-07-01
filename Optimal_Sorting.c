#include<stdio.h>
int main()
{
    int n,c=0;
    scanf("%d",&n); 
    for(int i=0;i<n;i++)
    {
        int x;
        scanf("%d",&x);
        int arr[x];
        for(int j=0;j<x;j++)
        {
            scanf("%d",&arr[j]);
        }
        for(int k=1;k<x;k++)
        {
            if(arr[k-1]>arr[k])
            {
                c++;
            }
        }
            if(c==0)
            {
                printf("%d",c);
            }
            else
            {
                int min=arr[0],max=arr[0];
                for(int l=0;l<x;l++)
                {
                    if(min>arr[l])
                    {
                        min=arr[l];
                    }
                    if(max<arr[l])
                    {
                        max=arr[l];
                    }
                }
                printf("%d
",max-min);   
            }
    }
}