#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,s,q,res,rem;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        q=arr[i];
        res=0;
        while(q>0)
        {
            rem=q%10;
            res=(res*10)+rem;
            q=q/10;
        }
        if(res==arr[i])
        {
            printf("True
");
        }
        
        else 
        {
            printf("False
");
        }
    }
}