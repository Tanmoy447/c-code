//star triangle mast
#include<stdio.h>
int main ()
{
	int rows;
    printf("Enter the values of rows : ");
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++)
    {
    	for(int j=1;j<=rows-i;j++)
    	{
    		printf(" ");
		}
		for(int k=1;k<=i;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
