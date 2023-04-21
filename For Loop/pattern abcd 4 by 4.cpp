//pattern abcd 4 by 4
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
		int a=1;
		for(int j=1;j<=column;j++)
		{
			int d=a+64;
			char ch=(char)d;
			printf("%c ",ch);
			a++;
		}
		printf("\n");
	}
	return 0;
}

