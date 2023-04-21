#include<stdio.h>
void fun(int arr[])
{
    for(int i=0;i<=5;i++)
    {
        if(arr[i]%2!=0)
        {
            arr[i]*=2;
        }
        else
        {
            arr[i]+=10;
        }
    }
    for(int i=0;i<=5;i++)
    {
        printf("%d  ",arr[i]);
    }
    return;
}
int main()
{
    int n;
    int arr[6]={1,2,3,4,5,6};
    fun(arr);
    return 0;
}