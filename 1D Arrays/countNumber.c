#include<stdio.h>
int main()
{
    int m;
    printf("Enter the number of m: ");
    scanf("%d",&m);
    int n;
    printf("Enter the number of n: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++)
    {
        printf("Enter the Array %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=n-1;i++)
    {
        if(arr[i]>m)
        {
            printf("%d  \n",i);
            printf("%d  ",arr[i]);
        }
    }
    return 0;
}