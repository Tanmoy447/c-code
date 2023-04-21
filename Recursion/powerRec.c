#include<stdio.h>
int power(int a,int b)
{
    if(b==0)        //base case
    return 1;
    return a*power(a,b-1);
}
int main()
{
    int a,b;
    printf("Enter the values of a and b : ");
    scanf("%d %d",&a,&b);
    int p= power(a,b);

    // for(int i=1;i<=b;i++)
    // {
    //     pow=pow*a;
    // }

    printf("The value of %d to the power %d is : %d",a,b,p);
    return 0;
}