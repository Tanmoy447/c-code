//Table of n
#include<stdio.h>
int main ()
{
	int n,i;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	for( i=1;i<=10;i=i+1)
	{
		printf("%d*%d=%d \n",n,i,(n*i));
	}
	return 0;
}
