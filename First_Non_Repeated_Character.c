#include<stdio.h>
int main()
{
    int t,z=0;
    scanf("%d",&t);
    while(t>0)
    {
        char str[100];
        int n,i,j,c,w;
        scanf("%d",&n);
        scanf("%s",&str);
        for(i=0;i<n;i++)
        {
            c=0;
            z=0;
            w=str[i];
            for(j=0;j<n;j++)
            {
                if(i!=j)
                {
                    if(str[j]==w)
                    {
                        c=1;
                        break;
                    }
                }
            }
            if(c==0)
            {
                printf("%c",w);
                z=1;
                break;
            }
        }
        if(z==0)
        {
            printf("-1");
            
        }
        printf("
");
        t--;
    }
}