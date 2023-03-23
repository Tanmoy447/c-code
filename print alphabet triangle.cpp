//print alphabet triangle
#include<stdio.h>
int main ()
{
	int rows;
	printf("Enter the values of rows : ");
	scanf("%d",&rows);
	for (int i=1;i<=rows;i++)
	{
		int a=1;
		for(int j=1;j<=i;j++)
		{
			if(rows%2==0)
			{
				int d=a+64;
				char ch=(char)d;
				printf("%c ",ch);
			}
			else
			printf("%d ",&a);

			a++;
				
		}
		printf("\n");
	}
	return 0;
	
}
