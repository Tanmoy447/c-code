#include<stdio.h>
int reverse(int n)
{
    if(n==0)        
    return 1;
    printf("%d\n",n);
    reverse(n-1);
    return n;//recAns;
}
int main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    int rev=reverse(n);
  // printf("The value is : %d ",rev);
    return 0;
}