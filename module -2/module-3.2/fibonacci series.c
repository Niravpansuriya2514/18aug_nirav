#include<stdio.h>
#include<conio.h>
int main()
{
	int i,t1,t2,n,nextnumber;
	t1=0;
	t2=1;
	nextnumber=t1+t2;
	printf("enter the number : ");
	scanf("%d",&n);
	printf("fibonacci series: %d,%d",t1,t2);
	for(i=3;i<=n;i++)
	{
	
	t1=t2;
	t2=nextnumber;
	nextnumber=t1+t2;
	printf("%d ",nextnumber);
	
   }
   getch();
   return 0;
	
}
