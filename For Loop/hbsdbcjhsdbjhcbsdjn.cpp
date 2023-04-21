#include<stdio.h>
int main()
{
    int rows;
    printf("Enter the number of rows : ");
    scanf("%d",&rows);
    for(int i=4;i>=1;i--)
    {
    	//int a=3;
    	for(int j=i;j>=1;j--)
    	{
    		//if(j>0)
    		printf("%d",j);
    		//a--;
		}
		printf("\n");
	}
	return 0;
}
