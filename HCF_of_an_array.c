#include<stdio.h>
int main()
{
    int n,i,hcf;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    hcf=arr[0];
    int j=1;
    while(j<n)
    {
       if(arr[j]%hcf==0)
       {
           j++;
       }
       else
       {
           hcf=arr[j]%hcf;
           i++;
       }
    }
    printf("%d",hcf);
    return 0;
}