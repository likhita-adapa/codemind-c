#include<stdio.h>
int main()
{
    char s[100];
    int k=0;
    scanf("%s",s);
    for(int i=0;s[i]!=NULL;i++)
    {
        int c=0;
        for(int j=0;s[j]!=NULL;j++)
        {
            if(s[i]==s[j]&&i!=j)
            {
                c++;
                break;
            }
        }
        if(c==0)
        {
            printf("%d",i);
            k++;
            break;
        }
    }
    if(k==0)
    {
        printf("-1");
    }
}
