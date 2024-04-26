#include<iostream>
using namespace std;
	class parent
	{
		public:
			void display()
			{
				cout<<"Display parent"<<endl;
			}
			virtual void show()
			{ 
				cout<<"Show parent"<<endl;
			}
	};
			
	class child:public parent
	{
		public:
			void display()
			{
				cout<<"Display child"<<endl;
			}
			void show()
			{ 
				cout<<"Show child"<<endl;
			}
	};
	
int main()
	{
		parent p; 
		child c; 
		parent *parptr;
		cout<<"pointer pointint to parent"<<endl;
		parptr=&p;
		parptr->display();
		parptr->show();
		
		cout<<"pointer points to child class"<<endl;
		parptr->display();
		parptr->show();
	}
			


