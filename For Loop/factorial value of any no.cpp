//factorial value of any no
#include<stdio.h>
int main ()
{
	int number,factorial=1;
	printf("Enter the valuie of number : ");
	scanf("%d",&number);
	for(int i=1;i<=number;i++)
	{
		factorial=factorial*i;
	}
	printf("The factorial of the number %d is : %d ",number,factorial);
	return 0;
}
