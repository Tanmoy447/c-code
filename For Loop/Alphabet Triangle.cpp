//Alphabet Triangle
#include<stdio.h>
int main ()
{4
	int rows;
    printf("Enter the values of rows : ");
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++)
    {
    	int a=1;
    	for(int j=1;j<=rows-i;j++)
    	{
    		printf(" ");
		}
		for(int k=1;k<=i;k++)
		{
			int d=a+64;
			char ch=(char)d;
			printf("%c",ch);
			a++;
		}
		printf("\n");
	}
	return 0;
}
