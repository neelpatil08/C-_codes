#include<iostream>
using namespace std;
int main()
{
	int n1,n2,gcd=0,i;
	cout<<"Enter any first numbers\n";
	cin>>n1;
	cout<<"Enter any sencond numbers\n";
    cin>>n2;
	for(i=1;i<=n1 && i<=n2; i++)
	{
		if(n1%i==0 && n2%i==0)
		{
			gcd=i;
		//	cout<<"gcd: "<<gcd;
		}
	}
	cout<<"gcd: "<<gcd;
}