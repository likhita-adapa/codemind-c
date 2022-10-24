#include<stdio.h>
int main()
{
    int n,i,a[100],hcf,j=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    hcf=a[0];
    while(j<n)
    {
        if(a[j]%hcf==0)
        {
            j++;
        }
        else
        {
            hcf=a[j]%hcf;
            i++;
        }
    }
    printf("%d",hcf);
}