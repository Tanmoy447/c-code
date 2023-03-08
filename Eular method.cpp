#include<stdio.h>
#include<math.h>
#define f(x,y) (1+(x*y))
int main()
{
	float x0,y0,x1,h;
	printf("enter x0 and y0");
	scanf("%f%f", &x0,&y0);
	printf("enter the value of x1");
	scanf("%f", &x1);
	printf("enter the value of h");
	scanf("%f", &h);
	do
	{
		y0=y0+h*f(x0,y0);
		x0=x0+h;
		printf("At the point x=%f,y value is %f\n", x0,y0);
		
	}
	while(x0<x1);
    return 0;
}
