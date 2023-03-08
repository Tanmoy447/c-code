#include<stdio.h>
#include<math.h>
#define f(x) (1/(1+pow(x,2)))
int main()
{
 float a,b,h,sum=0;
 int n;
 printf("Enter the lower limit of integration",a);
 scanf("%f" ,&a);
 printf("Enter the uper limit of the integration",b);
 scanf("%f" ,&b);
 printf("Enter the number of subintervals",n);
 scanf("%d" ,&n);
 h=(b-a)/n;
 do
 {
   sum=sum+(h/2)*(f(a)+f(a+h));
   a=a+h; 	
 }
 while(a<b); 
 printf("the answer is %f",sum);
 return 0;	
}

