#include<stdio.h>
void sum(int n,int a)
{
    if(n==0)
    {
        printf("The sum is : %d  ",a+n);
    }
    sum(n-1,a+n);
    return;
}
int main ()
{
    int n;
    int a=0;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    sum(n,a);
    return 0;
}