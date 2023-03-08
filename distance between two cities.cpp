#include<stdio.h>
int main()
{
	float distance_between_two_cities,distance_in_meter,distance_in_cm,distance_in_inches;
	printf("Enter the distsnce in km :");
	scanf("%f",&distance_between_two_cities);
	distance_in_meter=distance_between_two_cities/1000;
	distance_in_cm=distance_between_two_cities/100;
	distance_in_inches=distance_between_two_cities/39370.1;
	//printf("\n Distance in km is :",distance_between_two_cities);
	printf("\n Distance in m is : %f",distance_in_meter);
	printf("\n Distance in cm is : %f",distance_in_cm);
	printf("\n Distance in inches is : %f",distance_in_inches);
	return 0;
}
