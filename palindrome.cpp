#include<iostream>
using namespace std;
int main()
{
	int n,rem,rev,temp;
	cout<<"Enter any number: ";
	cin>>n;
	temp=n;
	rev=0;
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n/=10;
	}
	if(rev==temp)
	{
		cout<<endl<<temp<<" Is a palindrome number";
		}
		else
		{
			cout<<endl<<temp<<" Is not a palindrome number";
		}
	}
