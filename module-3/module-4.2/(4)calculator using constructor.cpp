#include<iostream>
#include<conio.h>
using namespace std;
class calculator
{
	float a,b;
	public:
    calculator()
	{
		cout<<"\tADDITION\n";
		cout<<"enter the first number : ";
		cin>>a;
		cout<<"enter the second number : ";
		cin>>b;
		cout<<"addition is a and b is: "<<a+b;

        cout<<"\n\n\tSUBTRACTION\n";
		cout<<"\nenter the first number : ";
		cin>>a;
		cout<<"enter the second number : ";
		cin>>b;
		cout<<"subtraction is a and b is: "<<a-b;

        cout<<"\n\n\tMULTIPLICATION\n";
    	cout<<"\nenter the first number : ";
		cin>>a;
		cout<<"enter the second number : ";
		cin>>b;
		cout<<"multiplication is a and b is: "<<a*b;

        cout<<"\n\n\tDIVISION\n";
    	cout<<"\nenter the first number : ";
		cin>>a;
		cout<<"enter the second number : ";
		cin>>b;
		cout<<"division is a and b is: "<<a/b;
	
	}
};
int main()
{
	calculator c;
	getch();          
}
