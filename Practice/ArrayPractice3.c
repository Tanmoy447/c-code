//find maximum elements in a given array
#include<stdio.h>
int main()
{
    int arr[6]={11,2,3,44,5,6};
    printf("The elements of the array are :");
    for(int i=0;i<6;i++)
    {
        printf("%d ",arr[i]);
    }
    int max=arr[0];
    for(int i=0;i<6;i++)
    {
        if(max < arr[i])
        {
            max=arr[i];
        }
    }
    printf("\n The maximum element of the array is : %d",max);
    return 0;
}