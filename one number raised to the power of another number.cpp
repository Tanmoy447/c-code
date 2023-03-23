//one number raised to the power of another number
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the values of a  : ");
	scanf("%d",&a);
	printf("Enter the values of b : ");
	scanf("%d",&b);
	int product=1;
	for(int i=1;i<=b;i++)
	{
		product=product*a;
	
	}
	printf("%d ",product);

	return 0;
}
