#include<stdio.h>
int main ()
{
    int rows ;
    printf("Enter the number of rows : ");
    scanf("%d",&rows);
    int nsr=1;
    int nsp=1; 
    int ml=rows/2+1;
    for(int i=1;i<=rows;i++)
    {
       //int a=1;
        for(int j=1;j<=nsp;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=nsr;k++)
        {
            printf("*");
            //a=a+2;
        }
        if(i<ml)
        {
            nsp--;
            nsr+=2;
            
        }
        else
        {
            nsp++;
            nsr-=2;
            
        }
        
        printf("\n");
    }
    return 0;
}
