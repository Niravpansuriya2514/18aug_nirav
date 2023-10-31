#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char s[100];
	printf("enter the string : ");
    gets(s);
    strrev(s);
	printf("reversed string is :%s",s);
	
	getch();
	return 0;
} 
