#include<stdio.h>
int main()
{
    int n;
    printf("enter the number of rows: ");
    scanf("%d",&n);
    int c;
    printf("enter the number of columns: ");
    scanf("%d",&c);
    printf("Enter the elements: ");
    int arr[n][c];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
       //  printf("\n");
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    int sum=0;
    for(int i=0;i<=1;i++)
    {
        for(int j=0;j<c;j++)
        {
           
           sum=sum+arr[i][j];
        }
       //  printf("\n");
    }
    printf("The sum is %d ",sum);
    return 0;
}