#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="College";
    printf("%s\n",str);
    for(int i=6;i>=2;i--)
    {
        str[i+1]=str[i];
    }
    str[2]='m';
    printf("%s",str);
    return 0;
}