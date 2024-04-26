#include<iostream>
using namespace std;
int main()
{
	int total,ch,op,q,st,dsh;
	cout<<"Enter your choice (1.MOCKTAILS\n2.STARTERS,PUNJABI,CHINESE,DESERT)\n";
	cin>>ch;
	
	switch(ch)
	{
		case 1:
			cout<<"\n u choice mocktail..\n select your choice..\n";
			cout<<"1. MOJITO\n2. ROYAL MARTINI\n3. DAIQUIRI:";
			cin>>op;
			switch(op)
			{
				case 1: 
					cout<<"\n u choice Mojito..\n enter quantity...";
					cin>>q;
					total=q*100;
					cout<<"your payable bill is "<<total<<" rs";
					break;
			}
		case 2:
			cout<<"\n you choice starter..\n Select your choice..\n";
			cout<<"1. MANCHURIAN DRY\n2.CHINESE BHEL:";
			cin>>st;
			switch(st)
			{
				case 1:
					cout<<"\n You choice Manchurian Dry..\n Enter dish...";
					cin>>dsh;
					total=dsh*85;
					cout<<"Your bill is"<<total<<"rs";
					break;
			}
}
}