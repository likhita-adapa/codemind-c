#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int i,j;
    for(i=0;i<a;i++)
    {
        for(j=1;j<a-1;j++)
        {
            printf("%d",j);
        }
        for(j=1;j<a-2;j++)
        {
            printf("%d",j);
        }
        printf("
");
    }
    return 0;
}