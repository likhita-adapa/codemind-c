#include<stdio.h>
int main()
{
    char s[100];
    int c=0,c1=0;
    scanf("%[^
]s",s);
    for(int i=0;s[i]!=NULL;i++)
    {
        if (s[i]=='a' || s[i]=='e' || s[i]=='i'|| s[i]=='o' || s[i] =='u')
        {
            c++;
        }
        else
        {
            if(c1<c)
            {
                c1=c;
            }
            c=0;
        }
    }
    if(c1<c)
    {
        c1=c;
    }
    printf("%d",c1);
}