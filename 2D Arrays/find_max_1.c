#include<stdio.h>
int main()
{
    int arr[3][4]={1,0,1,0,1,1,1,0,1,1,1,1};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    int maxCount=0;
    int index=-1;
     for(int i=0;i<3;i++)
    {
        int count=0;
        for(int j=0;j<4;j++)
        {
           if(arr[i][j]==1)
           {
            count++;
           }
        }
        if(maxCount<count)
        {
            maxCount=count;
            index=i;
        }
    }
    printf("The maximum number is %d \n",maxCount);
    printf("The row number is %d ",index);
    return 0;
}