#include<stdio.h>
int main ()
{
	int fact=1,d;
//	printf("Enter the value of n : ");
//	scanf("%d",&n);
	float sum =0.0;
	for(int i=1;i<=7;i++)
	{
		fact=fact*i;
//		d=i/fact;
//		printf("%d/%d %d\n",i,fact,(i));
//	
	}
		sum =sum+(i/fact);
		i++;
	printf("Sum of the series is %f\n ",sum);
	return 0;
}
