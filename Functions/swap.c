#include<stdio.h>
void swap(int a,int b)
{
    a=a+b;
    b=a-b; 
    a=a-b;
    return;
}
int main()
{
    int a;
    printf("Enter the value of a : ");
    scanf("%d",&a);

    int b;
    printf("Enter the value of b : ");
    scanf("%d",&b);

    swap(a,b);

    printf("The value of a is %d \n",a);
    printf("The value of b is %d \n",b);

    return 0;
}