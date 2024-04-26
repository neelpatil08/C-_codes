#include<iostream>
using namespace std;
class calc{
	int l,b;
	public:
		void area(){
			l=5;
			b=10;
			cout << endl << "No arg function";
			cout<<"The area is: "<<(l*b);
		}
		void area(int x,int y)
		{
			cout << endl << "Integer function";
			cout<<"The area is: "<<(x*y);
		}
		void area(float x,float y)
		{
			cout << endl << "Float function";
			cout<<"The area is: "<<(x*y);
		}
		void area(double x,double y)
		{
			cout << endl << "Double function";
			cout<<"The area is: "<<(x*y);
		}
	};
	int main()
	{
		calc a;
		a.area();
		cout<<endl;
		a.area(15,20);
		cout<<endl;
		a.area(15.9f,16.8f);
		cout<<endl;
		a.area(5.6,7.4);
	}