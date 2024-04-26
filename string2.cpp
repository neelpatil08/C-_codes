#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s3;
	string s1("12345");
	string s2("abcde");
	cout<<"Original strings are: ";
	cout<<"s1: "<<s1<<"\n";
	cout<<"s2: "<<s2<<"\n";
	cout<<"Place s2 inside s1\n";
	s1.insert(4,s2);
	cout<<"Modified s1:"<<s1<<"\n";
	cout<<"Remove 5 characters from a s1";
	s1.erase(4,5);
	cout<<"Now s1:"<<s1<<"\n";
	cout<<"Replace Middle 3 characters in s2 with s1";
	s2.replace(1,3,s1);
	cout<<"Now s2:"<<s2<<"\n";
	return 0;
}