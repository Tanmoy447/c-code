#include<stdio.h>
int main()
{
	float basic_salary,allowance,house_rent,gross_salary;
	printf("Enter the basic_salary:");
	scanf("%f",&basic_salary);
	
	allowance=0.4*basic_salary;
	house_rent=0.2*basic_salary;
	gross_salary=basic_salary+house_rent+allowance;
	printf("\n Basic salary is: %f",basic_salary);
	printf("\n Allowance is :%f",allowance);
	printf("\n House rent is:%f ",house_rent);
	printf("\n Gross salary is :%f",gross_salary);
	if(gross_salary <0)
	printf("u r lucky");
	return 0;
}
