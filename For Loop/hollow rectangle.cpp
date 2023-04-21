//hollow rectangle
#include<stdio.h>
int main ()
{
	int rows,column;
	printf("Enter the values of rows : ");
	scanf("%d",&rows);
	printf("Enter the values of columns : ");
	scanf("%d",&column);
	for(int i=1;i<=rows;i++)
	{
		for(int j=1;j<=column;j++)
		{
			int ldr=rows%10;
			int ldc=column%10;
			if(j==ldc || i==ldr)
			{
				printf("*");
			}
			else
			{
				if(j==1 || i==1)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
		}
		printf("\n");
	}
	return 0;
}
