//print 101 triangle
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
			int d=a%2;
			if(d==0)
			{
				int d=0;
				printf("%d ",d);
			}
			else
			{
				if(d!=0)
				{
					int d=1;
					printf("%d ",d);
				}
			}
		
			a++;
		}
		printf("\n");
	}
	return 0;
}
