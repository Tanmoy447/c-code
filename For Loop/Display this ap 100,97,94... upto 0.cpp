//Display this ap 100,97,94... upto 0

#include<stdio.h>
int main ()
{
	int n,i;
//	printf("n : ");
//	scanf("%d",&n);
	int a=100;
	
	for(i=1;a>0;i++)
	{
		printf("%d ",a);
		a=a-3;
	}
	return 0;
}
