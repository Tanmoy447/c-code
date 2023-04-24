#include<stdio.h>
int main()
{
    int r;
    printf("Enter rows: ");
    scanf("%d",&r);
    int c;
    printf("Enter column: ");
    scanf("%d",&c);
    int arr[r][c];       //={{15,2},{56,2}};
    for(int i=0;i<r;i++)            //we are taking input
    {
        for(int j=0;j<c;j++)
        {
            //printf("Enter the array %d %d ",i,j);
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<r;i++)            //we are printing array
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}