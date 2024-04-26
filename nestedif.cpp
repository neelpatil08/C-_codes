#include<iostream>
using namespace std;
int main()
{
	int year;
	cout<<"Enter year";
	cin>>year;
	if(year%100==0)
	{
		if(year%400==0)
		{
			cout<<"Year is a leap year";
		}
		else
		{
			cout<<"Year is not a leap year";
		}
	}
	else
		{
			if(year%4==0)
			{
				cout<<"Year is a leap year";
			}
			else
			{
				cout<<"Year is not a leap year";
			}
	
		}
	}