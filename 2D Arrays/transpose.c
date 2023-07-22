#include<stdio.h>
int main()
{
    int n;
    printf("enter the number of rows: ");
    scanf("%d",&n);
    int c;
    printf("enter the number of columns: ");
    scanf("%d",&c);
    printf("Enter the elements \n");
    int arr[n][c];

    //taking the value of array
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    printf("Before transpose is :\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    //printing the transpose matrix
    printf("After Transpose is: \n");
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}