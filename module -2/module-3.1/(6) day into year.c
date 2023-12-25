#include<stdio.h>
#include<conio.h>
int main()

{
	int year,day,d,y;
	printf("enter the days:");
	scanf("%d",&day);
	year = day/365;
	printf(" year = %d ",year);

    printf("\nenter your year : ");
    scanf("%d",&y);
	d = y*365;
	printf(" day = %d ",d);
	
	
	getch();
	return 0;
}
