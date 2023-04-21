#include<stdio.h>
int main()
{
    int arr[5]; 
    for(int i=0;i<=4;i++)
    {
        printf("\nEnter the marks %d: ",i+1);
        scanf("%d",&arr[i]);
    }
   for(int i=0;i<=4;i++)
   {
    if(arr[i]<35)
       printf("The roll num of failed candidate is %d\n ",i+1);
   }
    return 0;
}