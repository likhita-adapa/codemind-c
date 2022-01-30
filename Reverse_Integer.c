#include <stdio.h>
int main()
{    
	int n,reverse=0;
	scanf("%d",&n);//-321  //32
	
	while(n!=0){        
		reverse = reverse*10 + n%10;  //10+2 12  
		n=n/10;//32    
	}
	printf("%d",reverse);  //1  
	return 0;
}