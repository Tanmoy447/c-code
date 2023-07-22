#include<stdio.h>
int factorial(int n)
{
    if(n<=1)    return 1;
    return n*factorial(n-1);
}
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int x =factorial(n);
    printf("The factorial of %d  is : %d ",n,x);
    return 0;
}