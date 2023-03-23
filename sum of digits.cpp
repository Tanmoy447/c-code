//sum of digits
#include<stdio.h>
int main (){
	int n,ld=0;				//ld meand last digit;
	printf("Enter the number : ");
	scanf("%d",&n);
	int sum =0;
	int count =0;
	while(n!=0)
	{
		ld=n%10;
		n=n/10;
		sum=sum+ld;
		//if we want even odd positioned no...
//		count++;
//		if(count%2!=0)			//if we want to add odd position the count%2==0
//		{
//				sum=sum+ld;
//		}
//	
//		n=n/10;
	}
	printf("The sum of the digits are %d ",sum);
	return 0;
}
