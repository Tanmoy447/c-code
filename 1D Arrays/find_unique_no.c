#include<stdio.h>
#include<stdbool.h>
int main()
{
    int arr[9]={1,2,4,4,5,6,4,5,6};
    for(int i=0;i<=8;i++)
    {
        bool flag=false;
        for(int j=i+1;j<=8;j++)
        {
            if(arr[i]==arr[j])
            {
                flag=true;
            }
        }
        if(flag==false)
        {
            printf("The unique element is %d \n",arr[i]);
            //break;
        }
    }
    return 0;
}