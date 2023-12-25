#include<stdio.h>
#include<conio.h>
int main()

{
	int i,no;
	printf("enter your number : ");
	scanf("%d",&no);
	for(i=1;i<=10;i++)
	{
			{
				printf("%d*%d=%d\n",no,i,(no*i));
			}
	}
	getch();
	return 0;
}
