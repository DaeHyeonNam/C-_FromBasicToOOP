#include <iostream>

using namespace std;

int swap_value(int a, int b) //call by value
{
	int temp =a;
	a= b;
	b=temp;
}

int swap_reference(int& c, int& d) //call by reference
{
	int temp =c;
	c= d;
	d=temp;
}

int main()
{
	int a= 9;
	int b= 0;
	cout<<"a: "<<a<<" b: "<<b<<endl;
	
	cout<<"swap_value"<<endl;
	swap_value(a,b);
	cout<<"a: "<<a<<" b: "<<b<<endl;
	
	cout<<"swap_reference"<<endl;
	swap_reference(a,b);
	cout<<"a: "<<a<<" b: "<<b<<endl;
	
}
