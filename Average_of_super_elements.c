#include<stdio.h>
int main()
{
    int n,i,j,count=0,y=0,sum=0,s=0;
    float avrg;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        count=1;
        if(a[i]==0)
        {
            continue;
        }
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
                a[j]=0;
            }
        }
        if(count==a[i])
        {
            y=1;
            sum=sum+a[i];
            s++;
        }
    }
    if(y==0)
    {
        printf("-1");
    }
    else
    {
        avrg=(float)sum/s;
        printf("%.2f",avrg);
    }
}