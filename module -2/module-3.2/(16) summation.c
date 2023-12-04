#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,sum;
	printf("enter the number : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
	sum+=i;
    }
    printf("sum = %d",sum-1);
    getch();
}
