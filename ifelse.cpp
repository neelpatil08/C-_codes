#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter any number\n";
	cin>>n;
	if(n>0)
	{
	  	cout<<n<<"\nIS POSITIVE NUMBER";
	}
	else if(n==0)
	{
		cout<<n<<"IS ZERO";
	}
	else
	{
		cout<<n<<"\nIS NEGATIVE NUMBER";
	}

}
