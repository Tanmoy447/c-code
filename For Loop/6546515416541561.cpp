//print * in 4 by 4 
#include<stdio.h>
int main ()
{
	int i,r,c;
	printf("Enter the values of rows : ");
	scanf("%d",&r);
//	printf("Enter the values of columns : ");
//	scanf("%d",&c);
	for(i=1;i<=r;i++)
	{
		for(int j=11;j<=r+1-i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
