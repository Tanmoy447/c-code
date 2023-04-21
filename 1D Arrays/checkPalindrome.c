#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,2,0};
    int brr[5];
    for(int i=0;i<=4;i++)
    {
        brr[i]=arr[4-i];
    }
    for(int i=0;i<=4;i++)
    {
        //printf("arr is %d\n",arr[i]);
        printf("%d ",brr[i]);
    }
    for(int i=0;i<=4;i++)
    {
        if(arr[i]==brr[i])
        {
            printf("\nThe array is palindrome\n");
            break;
        }
        else
        {
            printf("\nThe array is not palindrome\n");
            break;
        }
    
    }
    return 0;
}