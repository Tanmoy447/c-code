//star pyramid
#include<stdio.h>
int main ()
{
	int rows,i,j,k;
    printf("Enter the values of rows : ");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
    	for( j=1;j<=rows-i;j++)
    	{
    		printf(" ");
		}
		for( k=1;k<=i;k=k+3)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
	
