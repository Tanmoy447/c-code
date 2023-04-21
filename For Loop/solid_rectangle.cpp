//solid rectangle 3/5
#include<stdio.h>
int main ()
{
	int r,c;
	printf("Enter the rows : ");
	scanf("%d",&r);
	printf("Enter the columns : ");
	scanf("%d",&c);
    for(int i=1;i<=r;i++)			// represent no of lines/rows
    {
    	for(int i=1;i<=c;i++)			// represent no of colomns each line
    	{
    		printf("*");
		}
		printf("\n");
	}
   
    return 0;
}
