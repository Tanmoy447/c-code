#include<stdio.h>
int main ()
{
    int rows ;
    printf("Enter the number of rows : ");
    scanf("%d",&rows);
   
    for(int i=1;i<=rows;i++)
    {
         int a=1;
        for (int j=1;j<=rows-i;j++) 
        {
            printf(" ");
        }
        for(int k=1;k<=2*i-1;k++)
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