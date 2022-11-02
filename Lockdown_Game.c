#include<stdio.h>
#include<string.h>
int main()
{
    long long int n,i,j,s=0,c=0;
    scanf("%lld",&n);
    char str[10010];
    scanf("%s",str);
    int arr[n];
    for(i=1;i<=n;i++)
    {
        arr[i-1]=i;
    }
    long long int t=n;
    while(n!=1)
    {
        if(str[s]=='y')
        {
            for(i=c;i<n-1;i++)  
            {  
                arr[i]=arr[i+1];
            }
            n--;
            s++;
        }
        else
        {
            s++;
            c++;
            
        }
        if(s>strlen(str)-1)
        {
            s=0;
        }
        if(c>n-1)
        {
            c=0;
        }
    }
    printf("%d",arr[0]);
}

