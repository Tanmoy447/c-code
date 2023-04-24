#include<stdio.h>
#include<limits.h>
int main()
{
    int arr[3][3]={1,2,3,45,5,66,77,8,9};
   // int brr[3][3]={9,8,7,6,5,4,3,2,1};
   int max=INT_MIN;
   for(int i=0;i<3;i++)            //we are printing array
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(max<arr[i][j])
            {
                max=arr[i][j];
            }
        }
    }
    printf("The max element is %d ",max);
    return 0;
}