#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of of n:");
    scanf("%d",&n);
    int product=1;
    int arr[n];
    for(int i=0;i<=n-1;i++)
    {
        printf("Enter the elements of array %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=n-1;i++)
    {
        product=product*arr[i];
    }
    printf("The product is: %d",product);
    return 0;
}