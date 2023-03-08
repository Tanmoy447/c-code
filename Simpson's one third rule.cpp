#include<stdio.h>
#include<math.h>
#define f(x) (1/(1+pow(x,2)))
int main()
{
 float a,b,h,sum=0;
 int n;
 printf("Enter the lower limit of the integration",a);
 scanf("%f" ,&a);
 printf("Enter the uper limit of the integration",b);
 scanf("%f" ,&b);
 printf("Enter the number of subintervals",n);
 scanf("%d" ,&n);
 h=(b-a)/n;
 do
 {
   sum=sum+(h/3)*(f(a)+4*f(a+h)+f(a+(2*h)));
   a=a+2*h; 	
 }
 while(a<b); 
 printf("the answer is %f",sum);
 return 0;	
}
