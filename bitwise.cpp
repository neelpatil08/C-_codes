#include<iostream>
using namespace std;
int main() 
{
int a = 20;	  
int b = 21;	
int c = 0;           
c = a & b;       
printf("AND Value of c is %d\n", c );
c = a | b;       
printf("OR  Value of c is %d\n", c );
c=a^b;
printf("XOR Value of c is %d\n",c);
c=~a;
printf("Complement of a is %d\n",c);
c=a>>1;
printf("value is %d\n",c);
c=a<<1;
printf("value is %d\n",c);
}