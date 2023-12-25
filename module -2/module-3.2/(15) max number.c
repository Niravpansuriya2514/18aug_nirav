#include<stdio.h>
#include<conio.h>
int main()

{
	int n,temp=0;
	 printf("Enter an integer: ");
    scanf("%d", &n);
    while(n>0)
    {
    	if(n%10>temp)
    	{
    		temp=n%10;
		}
		n/=10;
	}
	printf("max is %d",temp);
	getch();
	return 0;
}
