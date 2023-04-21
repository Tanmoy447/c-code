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
        for(int k=j+1;k<=n-1;k++)
        {
            if(arr[i]+arr[j]+arr[k]==x)
        {
            count=count+1;
            printf("The paires are (%d,%d,%d)\n",arr[i],arr[j],arr[k]);
        }
        }
       
      }
    }
    printf("Count is :%d ",count);
    return 0;
}