#include<stdio.h>
void england()
{
    printf("You born in England\n");        //7.
    return;                                //8.
}
void australia()
{
    printf("You are in Australia\n");      // 5.
    england();                             // 6.
    return;                               //9.
}
void india()
{
    printf("You love India\n");     //3.
    australia();                  //4.we call australia fn  
    return;
}
int main()              //1.at first computer reads this line
{
    india();           //2.we call india fn  so it goes to india fn
    return 0;          //last line
}