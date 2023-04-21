#include<stdio.h>
int maze(int n,int m)
{
    int rightWays=0;
    int downWays=0;
    if(n==1 && m==1)    return 1;
    if(n==1)
    {
        rightWays+=maze(n,m-1);
    }
    if(m==1)
    {
        downWays+=maze(n-1,m);
    }
    if(n>1 && m>1)
    {
         rightWays+=maze(n,m-1);
         downWays+=maze(n-1,m);
    }
    int totalWays=rightWays+downWays;
    return totalWays;
}
int main()
{
    int n;
    printf("Enter the number of rows : ");
    scanf("%d",&n);
    int m;
    printf("Enter the number of column : ");
    scanf("%d",&m);
    int no_of_ways=maze(n,m);
    printf("The number of ways are : %d .",no_of_ways);
    return 0;
}