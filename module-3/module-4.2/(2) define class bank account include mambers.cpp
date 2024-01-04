#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class datamember
{
	public:
	int accountnumber,balanceofaccount,choice,a,w,i;
	char nameofdepositor[20],typeofaccount[20];
	 display()
{
	
	cout<<"\nenter the name : ";
	cin>>nameofdepositor;
	cout<<"\nenter the account number : ";
	cin>>accountnumber;
	cout<<"\nenter type of account : ";
	cin>>typeofaccount;
	cout<<"\nenter the balance of account : ";
	cin>>balanceofaccount;
}
void show()
{
	cout<<"name :"<<nameofdepositor<<"\n";
	cout<<"account number : "<<accountnumber<<"\n";
	cout<<"type of account : "<<typeofaccount<<"\n";
	cout<<"balance of account"<<balanceofaccount<<"\n";
}
void member()
{
	
	cout<<"\nenter the number 1 to deposited an amount";
	cout<<"\nenter the number 2 to withdraw a amount";
	cout<<"\nenter the number 3 to display personal detail";
	cout<<"\nenter the number 4 no more procced"
	for(i=0;i<=3;i++)
	{
		cout<<"\n\nenter your choice : ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"to deposited a amount : ";
				cin>>a;
				cout<<"your total amount is: "<<balanceofaccount+a;
				break;
			case 2:
				cout<<"to withdraw a amount : ";
				cin>>w;
				cout<<"your total amount is: "<<balanceofaccount-w;
				break;
			case 3:
				show();
				break;
			default:
			cout<<"\n see you leter";
			
		}
	}
}

};
int main()
{
	datamember obj;
	obj.display();
	obj.member();
	
	getch();
}
