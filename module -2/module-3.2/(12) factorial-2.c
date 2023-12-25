#include<stdio.h>
#include<conio.h>
long int fact(long int no)

{ 
   if(no<=1)
   {
   	return 1;
   }
   return no *fact(no-1);
}
int main()
{
	int n;
	long int res;
	printf("\nenter the  no to find the factorial:");
	scanf("%d",&n);
	res=fact(n);
	printf("factorial is %ld\n",res);
	
	getch();
	return 0;
}
