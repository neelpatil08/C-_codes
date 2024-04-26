#include<iostream>
using namespace std;
int main()
{
	int k=1,i,j;
	for(i=0;i<4;i++)
	{
		for(j=i;j>=0;j--)
		{
			cout<<k<<" ";
			k++;
		}
		cout<<endl;
	}
}