#include<stdio.h>
#include<conio.h>
int main()
{
	int i,sum;
	for(i=1;i<=10;i++)
	{
		if(i%2!=0)
		{
			printf("%d ",i);
			sum+=i;
		}
	}
	printf("sum of even number is %d : ",sum-1);
}
