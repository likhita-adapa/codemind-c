#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int i;
    for (i=0; i<a; i++)
    {
        int n;
        scanf("%d",&n);
        int arr[n],j;
        for (j=0; j<n; j++)
        {
            scanf("%d",&arr[j]);
        }
        int c=1;
        for (j=1; j<n; j++)
        {
            if (arr[j]<arr[j-1])
            {
                c++;
            }
        }
        printf("%d
",c);
    }
    return 0;
}