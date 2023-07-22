#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    printf("The elements of the array are :\n");
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(int i=0;i<5;i++)
    {
        if(i%2!= 0)
        {
            arr[i]=2*arr[i];
        }
        if(i%2==0)
        {
            arr[i]=arr[i]+10;
        }
        printf("%d ",arr[i]);
    }
    return 0;
}