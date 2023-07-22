#include<stdio.h>
#include<string.h>
int main()
{
    char str1[]="Tanmoy Adhikary";
    int size=0;
    int i=0;
    while(str1[i]!='\0')
    {
        size++;
        i++;
    }
    printf("The size is :%d\n",size);
    char str2[size];
    strcpy(str2,str1);
    str2[2]='0';
    printf("%s\n",str1);
    printf("%s",str2);
    return 0;
}