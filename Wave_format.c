#include<stdio.h>
void sort(int *a,int n)
{
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,n);
   
    if(n%2!=0)
    {
        for(int i=n-1;i>=1;i-=2)
        {
            if(i==2)
            {
                printf("%d %d ",a[i-1],a[i]);
            }
            else
            {
                printf("%d %d ",a[i-1],a[i]);
            }
        }
        printf("%d ",a[0]);
    }
    else
    {
        for(int i=n-1;i>=0;i-=2)
        {
            printf("%d %d ",a[i-1],a[i]);
        }
    }
    
}

