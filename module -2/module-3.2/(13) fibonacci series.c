#include<stdio.h>
#include<conio.h>
int main()
{
	int i,t1,t2,n,nextnumber=t1+t2;
	t1=0;
	t2=1;
	printf("enter the number : ");
	scanf("%d",&n);
	printf("Fibonacci Series: %d %d ", t1, t2);
	for(i=3;i<=n;i++)
	{
	printf("%d ",nextnumber);
	
	t1=t2;
	t2=nextnumber;
	nextnumber=t1+t2;
	
   }
   getch();
   return 0;
	
}
