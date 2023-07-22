#include<stdio.h>
int fibonacci(int n)
{
    if(n<=2)    return 1;
    return fibonacci(n-1)+fibonacci(n-2);
}
int main()
{
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    // int a=1;
    // int b=1;
    // int sum=0;
    // for(int i=1;i<=n-2;i++)
    // {
    //     sum=a+b;
    //     a=b;
    //     b=sum;
    // }
    int f=fibonacci(n);
    printf("The fibonacci sum is : %d ",f);
    return 0;
}