#include<stdio.h>
#include<conio.h>
int main()

{
	int num1,num2,max;
	
	printf("enter number 1 :");
	scanf("%d",&num1);
	printf("enter number 2 :");
	scanf("%d",&num2);
	
	if(num1<num2)
	{
    	printf("the small number is %d\n",num1);
    }
    else
    {
    	printf("the small number is %d\n",num2);
	}
	
	getch();
	return 0;
}
