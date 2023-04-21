#include<stdio.h>
int add(int a,int b)
{
    return a+b;
}
int main ()
{
    int a,b;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("Enter the value of b : ");
    scanf("%d",&b);
    int sum =add(a,b);
    printf("Sum of %d and %d is %d :",a,b,sum);
    return 0;
}