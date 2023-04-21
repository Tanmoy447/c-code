#include<stdio.h>
int main ()
{
    int rows;
    printf("Enter the number of rows : ");
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++)
    {
       // int a=1;
        for(int j=1;j<=i-1;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
        	if(k==i || k+i==10)
           	printf("%d",k);
            //a++;
        }
        printf("\n");
    }
    return 0;
}
