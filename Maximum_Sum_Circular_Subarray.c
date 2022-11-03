#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a],i,j,k;
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    int m=-1000,s=0;
    for(k=0;k<a;k++)
    {
        int ft=arr[0];
        arr[0]=arr[a-1];
        for(i=1;i<a;i++)
        {
            int temp=arr[i];
            arr[i]=ft;
            ft=temp;
        }
        for(i=0;i<a;i++)
        {
            s=0;
            for(j=i;j<a;j++)
            {
                s+=arr[j];
                if(m<s)
                {
                    m=s;
                    
                }
            }
        }
    }
    printf("%d",m);
}

