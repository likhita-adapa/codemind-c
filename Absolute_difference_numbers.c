#include<stdio.h>
#include<math.h>
int main()
{
    int n,q,r,c=0,res;
    scanf("%d",&n);
    q=n;
    res=0;
    while(q>0)
    {
        r=q%10;
        res=(res*10)+r;
        c=c+1;
        q=q/10;
    }
    int arr[2],k,i,r1,q1,res1=0,l;
    scanf("%d",&k);
    i=pow(10,c-k);
    arr[0]=n/i;
    l=res/i;
    while(l>0)
    {
        r1=l%10;
        res1=(res1*10)+r1;
        l=l/10;
    }
    arr[1]=res1;
    if(arr[0]>arr[1])
    {
        printf("%d",arr[0]-arr[1]);
    }
    else
    {
        printf("%d",arr[1]-arr[0]);
    }
}