#include<stdio.h>
#include<conio.h>
void reverse(char *str)
{
	if(*str)
	{
	reverse(str+1);
	printf("%c",*str);
	}
}
int main()
{

char a[]="nirav";
reverse(a);
getch();
}

