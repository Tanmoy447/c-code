#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    printf("Enter the number of column: ");
    scanf("%d",&m);
    int arr[n][m];
    printf("Enter the elements of matrix: \n");
    //taking the input
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    //printing the matrix
    printf("Before transpose the matrix is:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("After transpose the matrix is : \n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
    //rotate
    //printf("After rotate matrix is:");
    for(int i=0;i<n;i++)
    {
        int j=0;
        int k=n-1;
        while(j<k)
        {
            int temp=arr[i][j];
            arr[i][j]=arr[i][k];
            arr[i][k]=temp;
            j++;
            k--;
        }
    }
    printf("After rotate the matrix is : \n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
    
    return 0;
    

}