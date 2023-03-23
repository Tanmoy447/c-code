//floyed's triangle
#include<stdio.h>
int main ()
{
	int rows;
	printf("Enter the values of rows : ");
	scanf("%d",&rows);
	int a=1;
	for(int i=1;i<=rows;i++)
	{
		for(int j=1;j<=i;j++)
		{
			//a=a+j;
			printf("%d ",a);
			a=a+2;
		}
		printf("\n");
	}
	return 0;
}
