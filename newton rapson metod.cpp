#include<stdio.h>
#include<math.h>
#define f(x) (pow(x,3)-4*x-9)
#define g(x) ((3*(pow(x,2)))-4)
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
	printf("accuracy\n");
	scanf("%f",&e);
	printf("n  a\t  b\t  x0\t  f(x0)\n");
	x0=(a+b)/2;
	do
	{
		x0=(x0-(f(x0))/(g(x0)));
		k++;
		printf("%d  %.4f  %.4f  %.4f  %.4f\n",k,a,b,x0,f(x0));
	}
	while(fabs(f(x0))>e);
	printf(" root is %f",x0);
	return 0;
}
