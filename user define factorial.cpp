#include<iostream>
using namespace std;
void fact()
{
	int n,i,fact;
	cout<<"Enter a number\n";
	cin>>n;
	for(i=1;i<=n;i++)
	{
	fact*=i;
    }
	cout<<"\nfactorial="<<fact;
}
int main()
{
	fact();
	fact();
}