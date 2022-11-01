#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int x;
        scanf("%d",&x);
        char s[100];
        scanf("%s",s);
        int c=0;
        for(int i=0;i<x;i++)
        {
            for(int j=i;j<x;j++)
            {
                if(s[i]=='1' && s[j]=='1')
                {
                    c++;
                }
            }
        }
        printf("%d
",c);
    }
}