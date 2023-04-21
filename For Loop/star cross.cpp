//star cross
#include<stdio.h>
int main ()
{
	int rows,column;
	printf("Enter the values of rows : ");
	scanf("%d",&rows);
//	printf("Enter the values of columns : ");
//	scanf("%d",&column);
	for(int i=1;i<=rows;i++)
	{
		for(int j=1;j<=rows;j++)
		{
//			int d=rows+column;
			if(i==j || i+j==rows+1)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
