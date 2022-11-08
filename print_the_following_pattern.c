#include<stdio.h>
int main()
{
    int a;;
    scanf("%d",&a);
    int i,j;
    for(i=0;i<a;i++)
    {
        for(j=0;j<a-(i+1);j++)
        {
            printf(" ");
        }
        for(j=0;j<i*2+1;j++)
        {
            printf("%d",i+1);
        }
        printf("
");
    }
}