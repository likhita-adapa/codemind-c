#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int i,j;
    for(i=0;i<a;i++)
    {
        for(j=0;j<a-(i+1);j++)
        {
            printf(" ");
        }
        for(j=i;j>0;j--)
        {
            printf("%d",j);
        }
        for(j=0;j<i+1;j++)
        {
            printf("%d",j);
        }
        printf("
");
    }
    return 0;
}