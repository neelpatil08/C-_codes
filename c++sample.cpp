#include<iostream>
using namespace std;
int main()
{
int num1,num2,max;
cout<<"Enter 2 no";
cin>>num1>>num2;
max=(num1>num2)?num1:num2;
while(1)
{
	if(max%num1==0 && max%num2==0)
	{
		cout<<"LCM="<<max;
		break;
	}
	max++;
}
}