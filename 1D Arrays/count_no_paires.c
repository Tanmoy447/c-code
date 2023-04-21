#include<stdio.h>
int main()
{
    int n;
    printf("Enter the n: ");
    scanf("%d",&n);
    int x;
    printf("Enter the x: ");
    scanf("%d",&x);
    int arr[n];
    int count=0;
    for(int i=0;i<=n-1;i++)
    {
        printf("Enter the array %d :",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=n-1;i++)
    {
      for(int j=i+1;j<=n-1;j++)
      {
        if(arr[i]+arr[j]==x)
        {
            count=count+1;
            printf("The paires are (%d,%d)\n",arr[i],arr[j]);
        }
       
      }
    }
    printf("Count is :%d ",count);
    return 0;
}