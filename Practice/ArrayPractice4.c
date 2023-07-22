//find minimum element from the array
#include<stdio.h>
int main()
{
    int arr[6]={12,3,5,6,-7,0};
    int min=arr[0];
    for(int i=0;i<6;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    printf("THe minimum element of the array is : %d ",min);
    return 0;
}