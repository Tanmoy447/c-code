#include<stdio.h>
#include<limits.h>
int main()
{
    
    int arr[5]={1,45,1,23,4};
    int max=arr[0];                 //INT_MIN
    int secondmax=arr[0];           //INT_MIN
    for(int i=0;i<=4;i++)
    {
        if(max<arr[i])
        max=arr[i];
    }
    for(int i=0;i<=4;i++)
    {
        if(arr[i]!=max && secondmax<arr[i])
        secondmax=arr[i];
    }
    printf("The max value is : %d\n",max);
    printf("The second max value is : %d",secondmax);
    return 0;
}