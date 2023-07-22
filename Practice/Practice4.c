//find max from the array
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++)
    {
        printf("Enter the array %d: ",i+1);
        scanf("%d ",&arr[i]);
    }
    int max=arr[0];
    for(int i=0;i<=n-1;i++)
    {
        if(max < arr[i])
        {
            max=arr[i];
        }
    }
    printf("The maximum element is %d ",max);

    return 0;
}