#include<stdio.h>
int main ()
{
    int rows ;
    printf("Enter the number of rows : ");
    scanf("%d",&rows);

    for(int i=1;i<=rows;i++)
    {
        int a=i-1;
        for(int j=1;j<=rows-i;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("%d",k);
        }
        for(int m=1;m<=i-1;m++)
        {
            printf("%d",a);
            a--;
        }
        printf("\n");
    }

    return 0;
}