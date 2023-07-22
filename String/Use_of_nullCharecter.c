#include<stdio.h>
int main()
{
    char arr[]="Tanmoy is a best student.And he is a good boy.";
    int i=0;
    while(arr[i]!='\0')
    {
        printf("%c",arr[i]);
        i++;
    }
    return 0;   
}