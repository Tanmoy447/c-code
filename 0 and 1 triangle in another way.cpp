//0 and 1 triangle in another way
#include<stdio.h>
int main ()
{
	int rows;
    printf("Enter the values of odd rows : ");
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++)
    {
    	for(int j=1;j<=i;j++)
    	{
    	//	int d=rows+j;
    		if((i+j)%2==0 )
    		{
    			printf(" 1 ");
			}
			else
			{
				printf(" 0 ");
			}
		}
		printf("\n");
	}
	return 0;
}
