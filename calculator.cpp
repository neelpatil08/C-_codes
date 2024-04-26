#include<iostream>
using namespace std;
int main()
{
	int a,b;
	char ch;
	cout<<"\nEnter your choice (+,-,*,/,%)\n";
	cin>>ch;
	cout<<"\n Enter any two number\n";
	cin>>a>>b;
	switch(ch)
	{
		case '+':
			cout<<"SUM OF TWO NUMBER IS:"<<(a+b);
			break;
		case '-':
			cout<<"DIFFERENCE OF TWO NUMBER IS:"<<(a-b);
			break;
		case '*':
			cout<<"PRODUCT OF TWO NUMBER IS:"<<(a*b);
			break;
		case '/':
			cout<<"DIVISION OF TWO NUMBER IS:"<<(a/b);
			break;
		case '%':
			cout<<"MODULUS IS:"<<(a%b);
			break;
			default:
				cout<<"ERROR";
	}
}