#include<iostream>
using namespace std;
void fact(int n)
{
	int i,fact;
	for(i=1;i<=n;i++)
	{
		fact*=i;
	}
	cout<<"\n factorial="<<fact;
}
int main()
{
	fact(5);
	int n;
	cout<<"Enter a number\n";
	cin>>n;
	fact(n);
}
	