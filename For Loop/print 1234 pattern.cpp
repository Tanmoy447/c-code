//print 1234 in 4/4 pattern
#include<stdio.h>
int main()
{
	for(int i=1;i<=4;i++)		//no of rows
	{
		for(int j=1;j<=4;j++)		//no of columns
		{
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}
