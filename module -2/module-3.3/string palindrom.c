#include<stdio.h>
#include<conio.h>
int main()
{
	char str[20];
	int l=0,n;
	printf("enter the string : ");
	scanf("%s",&str);
	n=strlen(str)-1;
	
	while(n>l)
	{
		if(str[l++]!=str[n--])
		{
			printf("%s is not palindrome\n",str);
			return 0;
		}
	}
		{
			printf("%s is  palindrome",str);
		}
	getch();
	return 0;
}
