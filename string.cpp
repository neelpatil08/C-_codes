#include<iostream>
using namespace std;
int main()
{
	string s1;
	string s2("New");
	string s3("Delhi");
	s1=s2;
	cout<<"s1=	"<<s1<<"\n";
	s1="Standard C++";
	cout<<"Now S1= "<<s1<<"\n";
	string s4(s1);
	cout<<"S4=	"<<s4<<"\n\n";
	cout<<"Enter a string\n";
	cin>>s4;
	cout<<"Now S4= "<<s4<<"\n\n";
	s1=s2+s3;
	cout<<"S1 finally contains: "<<s1<<"\n";
	return 0;
}