#include<stdio.h>
int min(int a,int b)
{
    if(a<b)     return a;
    else        return b;
}
int gcd(int x,int y)
{
    int hcf;
    for(int i=1;i<=min(x,y);i++)
    {
        if(x%i==0 && y%i==0)
        {
            hcf=i;
        }
    }
    return hcf;
}
int main()
{
    int a;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    int b;
    printf("Enter the value of b : ");
    scanf("%d",&b);
    int hcf=gcd(a,b);
    printf("The gcd of %d and %d is : %d",a,b,hcf);
    return 0;
}