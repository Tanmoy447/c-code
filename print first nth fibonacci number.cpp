//print first bn fibonacci number
#include<stdio.h>
int main ()
{
	int n;
	printf("Enter the value of number : ");
	scanf("%d",&n);
	int a=1;
	int b=1;
  	int sum =1;
  	for(int i=1;i<=n-2;i++)
  	{
  		sum=a+b;
  		a=b;
  		b=sum;
  	//	printf("The %dth febonacci number is %d \n",i,sum);
	}
	printf("%d ",sum);
	return 0;
}
