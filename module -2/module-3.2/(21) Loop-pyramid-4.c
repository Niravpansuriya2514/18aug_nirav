#include<stdio.h>
#include<conio.h>
int main()
{
	int j,i,n,A=65;
	
	printf("enter the number of row : ");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%c",A);
			A++;
		}
			A=65;
	
		printf("\n");
		
	}
	
	getch();
	return 0;
}
