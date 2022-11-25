#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    scanf("%s",str);
    int i,j,m1=0,ind1=0,ind2=-1,m2=0,c=0,l=strlen(str);
    for(i=0;i<l;i++)
    {
        c=0;
        for(j=0;j<l;j++)
        {
            if(str[i]==str[j])
            {
                c++;
            }
        }
        if(m1<c)
        {
            m1=c;
            ind1=i;
        }
    }
    for(i=0;i<l;i++)
    {
        c=0;
        for(j=0;j<l;j++)
        {
            if(str[i]==str[j])
            {
                c++;
            }
        }
        if(m2<c&&c<m1)
        {
            m2=c;
            ind2=i;
        }
    }
    if(ind2==-1)
    {
        printf("-1");
    }
    else
    {
        printf("%c",str[ind2]);
        
    }
}

