#include<stdio.h>
#include<conio.h>
long int multiplynumber(int n);
int main()
{
	int n;
	printf("enter the number : ");
	scanf("%d",&n);
	printf("factorial of %d =%ld",n,multiplynumber(n));
	
	return 0;
}
long int multiplynumber(int n)
{
	if(n>=1)
	return n*multiplynumber(n-1);
	else
	return 1;
	
	getch();
}
