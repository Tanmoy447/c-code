#include<stdio.h>
int main ()
{
    int a=12;
    int *y=&a;
    int **z=&y;
    int ***m=&z;
    printf("%d\n",&a);
    printf("%d\n",*y);
    printf("%d\n",**z);
    printf("%d\n",***m);
    return 0;
}