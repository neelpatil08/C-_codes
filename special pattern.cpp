#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	for(i=0;i<=3;i++)
	{
	for(j=0;j<=3-i;j++)		
	{
	cout<<" ";
	}
	for(k=0;k!=2*i+1;k++)
	{
		cout<<"*";
	}
	cout<<endl;
	}
}