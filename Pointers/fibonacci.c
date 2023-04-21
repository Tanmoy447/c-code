#include<stdio.h>
int fibonacci(int n)
{
    int a=1;
    int b=1;
     int add=0;
    for(int i=1;i<=n-2;i++)
    {
        add=(a+b);
        a=b;
        b=add;
        //printf("The fibonacci series of %d is : %d \n",n,sum);
    }
    return add;
}
int main()
{
    int n;
    
    printf("Enter the value of number : ");

    scanf("%d",&n);
    
   int sum=fibonacci(n);

    printf("The fibonacci series of %d is : %d ",n,sum);

    return 0;
}