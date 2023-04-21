#include<stdio.h>
int fibonacci(int n)
{
   if(n<=2)     return 1;
    return fibonacci(n-1)+fibonacci(n-2);
}
int main()
{
    int n;
    printf("Enter the values of n : ");
    scanf("%d",&n);
    // int a=1;
    // int b=1;
    int sum=fibonacci(n);
    // for(int i=0;i<=n-2;i++)
    // {
    //     fib=a+b;
    //     a=b;
    //     b=fib;
    // }
    printf("%d",sum);
    return 0;
}