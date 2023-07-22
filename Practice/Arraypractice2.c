//product of array elements
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the values of n: ");
    scanf("%d",&n);
    int arr[n];
    //printf("Enter the elements of the array: ");
    for(int i=0;i<n;i++)
    {
        printf("Enter the array %d :",i+1);
        scanf("%d",&arr[i]);
    }
    int product=1;
    for(int i=0;i<n;i++)
    {
        product=product*arr[i];
    }
    printf("The product of the array elements is : %d",product);
    return 0;
}