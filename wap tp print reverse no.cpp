//wap tp print reverse no
#include<stdio.h>
int main ()
{
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);
	int ld=0;
	int sum=0;						//ld means last digit
	int r=0;					//r is reverse no
	while(n>0)
	{
		ld=n%10;
		r=r*10;
		r=r+ld;
		n=n/10;
		sum=sum+ld;
	}
	printf("The reverse no is : %d ",r);
	printf("\nThe sum of reverse no is : %d ",sum);
	return 0;
}  
