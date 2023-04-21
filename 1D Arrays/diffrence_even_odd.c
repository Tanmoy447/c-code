#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int oddSum=0;
    int evenSum=0;
    
    int arr[n];
    for(int i=0;i<=n-1;i++)
    {
        printf("Enter the array %d :",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=n-1;i++)
    {
        if(i%2!=0)
        {
            oddSum=oddSum+arr[i];
        }
       if(i%2==0)
        {
            evenSum=evenSum+arr[i];
        }
    }
    int differnce=evenSum-oddSum;
    printf("%d\n",oddSum);
    printf("%d\n",evenSum);
    
    printf("%d\n",differnce);
    return 0;
}