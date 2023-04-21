//star plus
#include<stdio.h>
int main ()
{
	int rows;
	printf("Enter the values of rows : ");
	scanf("%d",&rows);
	for(int i=1;i<=rows;i++)
	{
		for(int j=1;j<=rows;j++)
		{
			int a=rows/2 +1;
			if(j==a || i==a)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}
