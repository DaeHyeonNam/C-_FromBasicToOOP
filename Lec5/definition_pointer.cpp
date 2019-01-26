#include <iostream>
using namespace std;

int main()
{
	int a=3;
	cout<<"&a: "<<&a<<endl; //pointer -> address
	
	double db = 4.545;
	double* dbptr = &db;
	
	int* ptr = &a; //pointer variable
	cout<<"ptr: "<<ptr<<endl;
	
	cout<<*(&a)<<endl;
	
	cout<<"*ptr: "<<*ptr<<endl;
}
