#include<stdio.h>
#include<math.h>
#define f(x) (log10(x)-2*x+7)
int main()
{
	float a,b,x0,err=0.01;
	do
	{
		printf("enter the value of interval of root",a,b);
		scanf("%f,%f" ,&a,&b);
	}
	while((f(a)*f(b))>0);
	do
	{
		x0=(a+b)/2;
	if (f(a)*f(x0) <0)
	b=x0;
	else
	 a=x0;
	}
	while(fabs(a-b)>err);
	printf("the answer is %.2f",x0);
	return 0;
			
}

