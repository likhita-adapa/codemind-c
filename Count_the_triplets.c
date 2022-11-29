#include<stdio.h>
int main()
{
    int o,p;
    scanf("%d",&o);
    for(p=0;p<o;p++)
    {
        int n;
        scanf("%d",&n);
        int arr[n],i,j,v,l,s,k,count=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                for(l=0;l<n;l++)
                {
                    if(i!=j && i!=l)
                    {
                        if(arr[i]+arr[j]==arr[l])
                        {
                            count++;
                        }
                    }
                }
            }
        }
        if(count!=0)
        {
            printf("%d
",count/2);
        }
        else
        {
            printf("-1
");
        }
    }
}

