#include<stdio.h>
int factorial(int x)             //we create a new function
{
    int fact=1;
    for(int i=1;i<=x;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main ()    //at first computer reads this main() function
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    int r;
    printf("Enter the value of r : ");
    scanf("%d",&r);
    int nfact=factorial(n);             //call the function
    int rfact=factorial(r);             //call the function
    int nrfact=factorial(n-r);          //call the function
    int ncr=nfact/(rfact*nrfact);
    printf("The combination of %d and %d is : %d ",n,r,ncr);
    return 0;
  
}
