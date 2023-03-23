//check composite  or not
#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
		{
			printf("The number is composite\n");
		//break;
		}
		
	}
	return 0;
}
