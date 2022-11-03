#include<stdio.h>
int main()
{
    int i,a[3],b[3],c=0,d=0;
    scanf("%d %d %d",&a[0],&a[1],&a[2]);
    scanf("%d %d %d
",&b[0],&b[1],&b[2]);
    for(i=0;i<3;i++)
    {
        if(a[1]>b[i])
        c++;
        else if(a[i]<b[i])
        d++;
    }
    printf("%d %d",c,d);
    return 0;
}