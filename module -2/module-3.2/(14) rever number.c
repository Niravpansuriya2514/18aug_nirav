#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int n,temp,reverse=0;

    printf("Enter an integer: ");
    scanf("%d", &n);
    while (n > 0) 
       {
           temp  = n%10;
           reverse=reverse*10+temp;    
           n/=10;    
       }
    printf("Reversed number = %d",reverse);
  
	getch();
	return 0;
} 
