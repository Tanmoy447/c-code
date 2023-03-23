// Display this gp 100,50,50,25...
#include<stdio.h>
int main ()
{
	int i;
	float a=100;
	for(i=1;a>0;i++)
	{
		printf("%f  ",a);			// all statements inside the loop will repeat.
		a=a*0.5;
	}
	return 0;
}
