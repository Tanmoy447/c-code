//print 1- 100 odd no using continuous
#include<stdio.h>
int main()
{
	for(int i=1;i<=100;i++)
	{
		if(i%2==0)	//odd/even number
		{
			continue;   	//continue skip the round of if loop
		}
			printf("%d ",i);
	}
	return 0;
}
