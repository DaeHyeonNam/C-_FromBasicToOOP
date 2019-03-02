#include <iostream>

using namespace std;

int main()
{
	int a =10;
	int* ptr;
	int** pptr; //pointer of pointer
	
	ptr= &a;
	pptr = &ptr;
	
	cout<<"ptr: "<<ptr<<endl;
	cout<<"pptr: "<<pptr<<endl;
	cout<<"**ptr: "<<**pptr<<endl;
}
