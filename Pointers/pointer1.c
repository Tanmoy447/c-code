#include<stdio.h>
int main()
{
    int a=5;

    int *x=&a;
    
    printf("%p\n",x);        //prints address of a

    printf("%p\n",&x);      //prints address of x

    printf("Size of the integer is %d bytes \n",sizeof(int));

    printf("%d\n",*x);      //prints the value inside address of a

    return 0;
}