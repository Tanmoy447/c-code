//Print AP 1,3,5,7....,n
#include<stdio.h>
int main ()
{
	int n,i;		// loop continues for n times
	printf("n : ");
	scanf("%d",&n);
	
	for(i=1;i<=2*n-1;i=i+2)
	{
		printf("%d ",i);
	}
	return 0;
} 
