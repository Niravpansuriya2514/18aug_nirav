#include<stdio.h>
#include<conio.h>
int main()

{
	int i,j,row;
	printf("enter the row : ");
	scanf("%d",&row);
	
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("* ",i);
		}
		printf("\n");
	}
	for(i=row-1;i>0;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("* ",i);
		}
		printf("\n");
	}
	getch();
	return 0;
}
