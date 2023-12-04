#include<stdio.h>
#include<conio.h>
int main()

{
	int p,t,r,si;
	
	printf("enter the value of principal amount p:");
	scanf("%d",&p);
	printf("enter the value of time t:");
	scanf("%d",&t);
	printf("enter the value of interest  rate r:");
	scanf("%d",&r);
	si = (p*t*r)/100;
	printf("Sinple interest = %d",si);
	
	getch();
	return 0;
}
