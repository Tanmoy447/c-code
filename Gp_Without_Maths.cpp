//Gp_Without_Maths
#include<stdio.h>
int main ()
{
	int n,i;
	printf("Enter the value of n :");
	scanf("%d",&n);
	int a=3;
	for (i=1;i<=n;i++)
	{
		printf("%d ",a);
		a=a*4;
	}
	return 0;
}

