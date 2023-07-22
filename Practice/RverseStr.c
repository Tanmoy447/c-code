#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    printf("Enter a string : ");
    scanf("%s",str);
    //find size
    int size=0;
    int k=0;
    while(str[k]!='\0')
    {
        size++;
        k++;
    }
    printf("The size is\n %d ",size);
    return 0;
}