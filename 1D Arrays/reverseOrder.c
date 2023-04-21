#include<stdio.h>
int main()
{
    int arr[5]={10,23,45,2,63};
    // int brr[5];
    // for(int i=0;i<=4;i++)
    // {
    //     brr[i]=arr[4-i];
        
    // }
    // for(int i=0;i<=4;i++)
    // {
    //     printf("%d ",brr[i]);
        
    // }
    for(int i=4;i>=0;i--)
    {
         printf("%d ",arr[i]);
    }

    
    return 0;
}