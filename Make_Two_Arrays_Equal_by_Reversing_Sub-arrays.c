#include<stdio.h>
void sort(int *a,int n)
{
	int i,j,temp,s=0,p;
	for(p=1;p<n;p++)
	{
		for(i=0;i<n-p;i++)
		{
			j=i+1;
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
		    }
   		}
	}
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int m;
    scanf("%d",&m);
    int b[m];
    for(int i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    int c=0;
    sort(a,n);
    sort(b,m);
    for(int i=0;i<n;i++)
    {
        if(a[i]==b[i])
        {
            c++;
        }
    }
    if(c==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
 
}
