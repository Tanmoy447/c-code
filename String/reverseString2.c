#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    printf("Enter a string : ");
    gets(str);
    int size =0;
    int k=0;
    while(str[k] !='\0')
    {
        size++;
        k++;
    }
    printf("The size of the string is : %d \n",size);
    for(int i=0,j=size-1;i<=j;i++,j--)
    {
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    puts("The reverse string is : ");
    puts(str);
    return 0;

}