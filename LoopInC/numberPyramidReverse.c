#include<stdio.h>
int main()
{
    int rows;
    printf("Enter the number of rows : ");
    scanf("%d",&rows);
    int ndt=rows;
    int nsp=1;
    for(int i=1;i<=2*rows+1;i++)
    {
        printf("%d",i);
    }
    printf("\n");
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=ndt;j++)
        {
            printf("%d",j);
        }
        for(int k=1;k<=nsp;k++)
        {
            printf(" ");
        }
        for(int j=1;j<=ndt;j++)
        {
            printf("%d",j);
        }
        ndt--;
        nsp+=2;
        printf("\n");

    }
    return 0;
}