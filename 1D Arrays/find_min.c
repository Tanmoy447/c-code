#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++)
    {
        printf("Enter the array %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    int min=INT_MAX;
    for(int i=0;i<=n-1;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    printf("The min value is : %d ",min);
    return 0;
}