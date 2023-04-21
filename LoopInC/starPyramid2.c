#include<stdio.h>
int main(){
    int n;
    printf("Enter the values of rows : ");
    scanf("%d",&n);
    int nsp=n/2;                 //nsp=no of space
    int nst=1;                      //nst=no of star
    int ml=n/2+1;                          //ml=middle line
    for (int  i = 1; i <= n; i++)
    {
        for(int j=1;j<=nsp;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=nst;k++)
        {
            printf("*");
        }
        if(i<ml){
            nsp--;
            nst=nst+2;
        }
        else{
            nsp++;
            nst=nst-2;
        }
        printf("\n");

    }
    return 0;
    
}