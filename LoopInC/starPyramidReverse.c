#include<stdio.h>
int main ()
{
    int rows;
    printf("Enter the no of rows : ");
    scanf("%d",&rows);
    int nst=rows;
    int nsp=1;
    for(int i=1;i<=2*rows+1;i++)
    {
        printf("*");
    }
    printf("\n");
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=nst;j++)
        {
            printf("*");
        }
        for(int k=1;k<=nsp;k++)
        {
            // if(k==i)
            printf(" ");
        }
      for(int j=1;j<=nst;j++)
        {
            printf("*");
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
    return 0;
}