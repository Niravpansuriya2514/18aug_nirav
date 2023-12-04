#include<stdio.h>
#include<conio.h>
int main()
{
	int array[5];
	int sum=0,i,j;
	for(i=1;i<=5;i++)
	{
		printf("enter the number of array (%d) : ",i);
		scanf("%d",&array[i]);
	}
	for(j=1;j<=5;j++)
	{
		sum=sum+array[j];
	}
	printf("\nsum of array number   : %d",sum);
	
	getch();
	return 0;
}

