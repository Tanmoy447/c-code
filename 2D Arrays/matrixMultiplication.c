#include<stdio.h>
int main()
{
    int m;
    printf("Enter the rows of 1st matrix: ");
    scanf("%d",&m);
    int n;
    printf("Enter the column of 1st matrix: ");
    scanf("%d",&n);
    int p;
    printf("Enter the rows of 2nd matrix: ");
    scanf("%d",&p);
    int q;
    printf("Enter the column of 2nd matrix: ");
    scanf("%d",&q);
    int arr[m][n];
    //  taking the input
    printf("Enter the elements of 1st matrix: \n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The first matrix is: \n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    int brr[p][q];
    printf("Enter the elements of 2nd matrix: \n");
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            scanf("%d",&brr[i][j]);
        }
    }
    printf("The first matrix is: \n");
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            printf("%d ",brr[i][j]);
        }
        printf("\n");
    }
    return 0;

}