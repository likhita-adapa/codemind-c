#include<stdio.h>
int main()
{
    int N,i;
    float s=0;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        s=1.0/i+s;
    }
    printf("%.2f",s);
}