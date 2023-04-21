#include<stdio.h>
int powerlog(int a,int b)
{
    if(b<=1)    return a;
    int x=powerlog(a,b/2);

    if(b%2==0)
    {
        return x*x;
    }
    else
    {
        return x*x*a;
    }
}
int main()
{
    int base;
    printf("Enter the value of base : ");
    scanf("%d",&base);
    int power;
    printf("Enter the value of power : ");
    scanf("%d",&power);
    int pow=powerlog(base,power);
    printf("%d to the power %d is :%d ",base,power,pow);
    return 0;
}