#include<stdio.h>
int maximumsub(int *a,int n)
{
    int s=a[0];
    int cm=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]>cm+a[i])
        {
            cm=a[i];
        }
        else
        {
            cm=cm+a[i];
        }
        if(s>cm)
        {
            s=s;
        }
        else
        {
            s=cm;
        }
    }
    return s;
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
    printf("%d",maximumsub(a,n));
}

