#include<iostream>
#include<conio.h>
using namespace std;
template <class z>


		
	    int swap(int x,int y)
		{
			
			x=x+y;
			y=x-y;
			x=x-y;
		
		}

int main()
{
	int x,y;
			cout<<"enter the first number x = ";
			cin>>x;
			cout<<"enter the second number y = ";
			cin>>y;
			swap(x,y);
			cout<<"first number x = "<<x;
			cout<<endl<<"second number y = "<<y;
	getch();
}
