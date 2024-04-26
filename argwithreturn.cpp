#include<iostream>
using namespace std;
int fact(int n)
{
	int i,fact;
	for(i=1;i<=n;i++)
	{
		fact*=i;
	}
	return fact;
}
int main()
{
	int n,fa;
	cout<<"Enter a number";
	cin>>n;
	fa=fact(n);
	cout<<"\nfactorial="<<fa;
}
	