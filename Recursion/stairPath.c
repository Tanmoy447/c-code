#include<stdio.h>
int stair(int n)
{
    if(n<=1)    return 1;
    return stair(n-1)+stair(n-2);
    
}
int main ()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    int path=stair(n);
    printf("The possible ways are %d",path);
    return 0;
}

