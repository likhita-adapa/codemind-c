#include<stdio.h>
int main()
{
    int n,c=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int a,b,s;
        scanf("%d %d",&a,&b);
        for(int j=a;j<=b;j++)
        {
            s=j%10;
            if(s==2 ||s==3||s==9)
            {
                c++;
            }
        }
        printf("%d
" ,c);
        c=0;
    }
}