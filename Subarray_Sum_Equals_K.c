#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int arr[a],s=0,c=0;
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<a;i++)
    {
        for(int j=i;j<a;j++)
        {
            s=s+arr[j];
            if(s==b)
            {
                c++;
            }
            if (c>b)
            {
                break;
            }
        }
        s=0;
    }
    printf("%d",c);
}