//print fibonaki series of nth number
#include<stdio.h>
int main ()
{
	int n;
	printf("Enter the value of number  :");
	scanf("%d",&n);
	int a=1;
	int b=1;
	int sum =0;
	for(int i=0;i<=n-2;i++)
	{
		sum=a+b;
		a=b;
		b=sum;
		printf("The fibonaki series of %d number is : %d  \n",n,sum);
	}
//	printf("The fibonaki series of %d number is : %d  ",n,sum);
	return 0;
}
