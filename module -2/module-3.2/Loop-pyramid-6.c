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
			if(j%2==0)
			{
			    printf("10 ");
		    }
		    else
		    {
		    	printf("! ");
			}
		}
		
	
		printf("\n");
		
	}
	
	getch();
	return 0;
}
