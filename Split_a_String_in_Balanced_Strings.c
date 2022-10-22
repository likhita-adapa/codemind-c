#include<stdio.h>
int main()
{
    char s[100];
    int c=0,x=0;
    scanf("%[^
]s",s);
    for(int i=0;s[i]!=NULL;i++)
    {
        if(s[i]=='R')
        {
            c++;
        }
        if(s[i]=='L')
        {
            c--;
        }
        if(c==0)
        {
            x++;
        }
    }
    printf("%d",x);
}