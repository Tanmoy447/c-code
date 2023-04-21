// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int n;
   printf("Enter the value of number : ");
   scanf("%d",&n);
   int fact=1;
   for(int i=1;i<=n;i++)
   {
       fact=fact*i;
       
   }
   printf("The factorial of %d the number is %d \n ",n,fact);

    return 0;
}
