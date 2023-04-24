#include<stdio.h>
int main()
{
    int arr[10]={1,2,4,5,6,7,8,9,10};
    for(int i=0;i<=8;i++)
    {
        if(arr[i+1]-arr[i]>1)
        {
            int x=(arr[i+1]+arr[i])/2;
            printf("The missing element is %d \n",x);
        }
    }
    return 0;
}