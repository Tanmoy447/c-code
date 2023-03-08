#include<stdio.h>
int main()
{
	float hindi,math,eng,ben,his,total,percentage;
	printf("Enter the marks of hindi :");
	scanf("%f",&hindi);
	printf("Enter the marks of math :");
	scanf("%f",&math);
	printf("Enter the marks of eng :");
	scanf("%f",&eng);
	printf("Enter the marks of ben :");
	scanf("%f",&ben);
	printf("Enter the marks of his :");
	scanf("%f",&his);
	total=hindi+math+eng+ben+his;
	percentage=total/5;
	printf("\n Aggreate marks is :%f",total);
	printf("\n Percentage is :%f",percentage);
	return 0;
}
