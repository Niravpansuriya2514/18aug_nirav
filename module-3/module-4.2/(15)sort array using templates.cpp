#include<iostream>
#include<conio.h>
using namespace std;
template <typename t>


	t display(t a[],t i,t j,t temp)
	{
	    for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	cout<<"sort in array : ";
	for(i=0;i<5;i++)
	{
		cout<<a[i];
	}
	}

int main()
{
	int a[]={1,4,3,6,2},i,j,temp;
	display(a,i,j,temp);
		
}

