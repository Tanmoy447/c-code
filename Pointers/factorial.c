#include<stdio.h>
int factorial(int n)
{
    int fac=1;
    for(int i=1;i<=n;i++)
    {
        fac=fac*i;
    }
    return fac;
}
int main()
{
    int n;
    printf("Enter the value of number : ");
    scanf("%d",&n);
    int fact=factorial(n);
    
    printf("The factorial of %d is : %d ",n,fact);

    return 0;

}