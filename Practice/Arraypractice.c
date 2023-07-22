#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    printf("The elements of the array are :");
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    int sum=0;
    for(int i=0;i<5;i++)
    {
        sum=sum+arr[i];
    }
    printf("\nThe sum of the elements are: %d ",sum);
    return 0;
}