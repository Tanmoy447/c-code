#include<stdio.h>
#include<math.h>
#define f(x) (1/(1+pow(x,2)))
int main()
{
	int n=10;
	float a, b,h,sum=0;
	printf("Enter the lower limit of the integration",a);
	scanf("%f,&a");
	printf("Enter the upper limit of the integration",b);
	scanf("%f,&b");
	h=(b-a)/n;
	do
	{
		sum=sum+(h/2)*(f(a)+f(a+h));
		a=a+h;
	}
	while(a<b);
	printf("the amswer is %f,sum");
	return 0;
}
