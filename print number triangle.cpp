//print number triangle
#include<stdio.h>
int main()
{
	int rows;
	printf("Enter the values of rows : ");
	scanf("%d",&rows);
	for(int i=1;i<=rows;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	return 0;
}
