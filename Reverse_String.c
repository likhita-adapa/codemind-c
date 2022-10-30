#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%[^
]s",s);
    int i,j,c=1,d=0,l,a[100];
    l=strlen(s);
    a[0]=l;
    for(i=l-1;i>=0;i--)
    {
        if(s[i]==' ')
        {
            a[c]=i;
            c++;
        }
    }
    for(i=l-1;i>=0;i--)
    {
        if(s[i]==' '||i==0)
        {
            if(i==0)
            {
                i=-1;
            }
            for(j=i+1;j<a[d];j++)
            {
                printf("%c",s[j]);
                
            }
            d++;
            if(i!=0)
            printf(" ");
        }
    }
}