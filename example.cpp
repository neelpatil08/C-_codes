#include<iostream>
using namespace std;
class person{
	public:
	int age;
	string name;
	public:
	void getdata()
	{
		name="Viraj";
		age=19;
	}
	void talk()
	{
		cout<<"My name is "<<name;
		cout<<"\nMy age is "<<age;
	 } 
};
int main()
{
	person viraj;
	viraj.getdata();
	viraj.talk();
	cout<<endl;
	viraj.name="king";
	viraj.age=22;
	viraj.talk();
}