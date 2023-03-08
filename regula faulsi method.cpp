#include<stdio.h>
#include<math.h>
#define f(x) (pow(x,2)-(7*x)-5)
int main()
{
	float a,b,x0,e;
	int k=0;
	printf("enter the value of root",a,b);
	scanf("%f,%f" ,&a,&b);
	do
	{
		printf("enter the value of root",a,b);
		scanf("%f,%f" ,&a,&b);
	}
	while((f(a)*f(b))>0);
	printf("accuracy");
	scanf("%f",&e);
	printf("n  a\tb\tx0\tf(x0)\n");
	do
	{
		k++;
		x0=(a*f(b)-b*f(a))/(f(b)-f(a));
		if((f(a)*f(x0))<0)
		b=x0;
		else
		a=x0;
		printf("%d %.4f %.4f %.4f %.4f\n",k, a, b, x0, f(x0));
	}
	while(fabs(f(x0))>e);
	printf("/n root is %.5f",x0);
	return 0;
}
