#include<stdio.h>
int main()
{
	int n,i,j,c,k,s=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
     {
     	scanf("%d",&a[i]);
	 }
	for(i=0;i<n;i++)
	{ 
	    c=0;
		for(j=0,k=n;j<k+1;j++)
		{
			if(i!=j)
			{
			    if(a[i]==a[j])
			    {
			        c++;
			    }
			}
		}
		if(c==0)
		{
			s=1;
			printf("%d ",a[i]);
		}
	}
	if(s==0)
	{
		printf("-1");
	}
}
