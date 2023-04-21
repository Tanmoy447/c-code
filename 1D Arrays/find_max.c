#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    printf("Enter the value of n :");
    scanf("%d",&n);
    int arr[n];     
    for(int i=0;i<=n-1;i++)
    {
        printf("Enter the Array %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    int max=arr[0];     //here we can use INT_MIN

    for(int i=0;i<=n-1;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    printf("The max value is: %d ",max);
    return 0;
}