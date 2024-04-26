#include<iostream>
using namespace std;
int fact()
{
	int i,n,fact;
	cout<<"Enter a number";
	cin>>n;
	for(i=0;i<=n;i++)
	{
	fact*=i;
	}
	return fact;
}
int main()
{
	cout<<"\nfactorial is"<<fact();
	int a=fact();
	cout<<"\nfactorial is"<<a;
}