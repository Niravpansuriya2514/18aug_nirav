#include<stdio.h>
#include<conio.h>
int main()
{
	int n,sum=0,temp;
	printf("enter the number : ");
	scanf("%d",&n);
	
	while(n > 0)
	{
        temp = n%10;
        sum = sum+temp;
        n/=10;
    }
        printf("sum is %d",sum);
        
    getch();
}
