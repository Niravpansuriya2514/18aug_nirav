#include<stdio.h>
#include<conio.h>
int main()

{
	int i,j,row,k=0;
	printf("enter the number of row : ");
	scanf("%d",&row);
	

	for(i=1;i<=row;i++)
	{
		for(j=4;j>=i;j--)
		{
			printf("  ");
		}
	    for(k=0;k!=2*i-1;k++)
	    {
	       printf("* ");
        }
		printf("\n");
	}
	getch();
	return 0;
}
