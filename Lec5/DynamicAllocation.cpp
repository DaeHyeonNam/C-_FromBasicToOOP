#include <iostream>

using namespace std;

int main()
{
	int arr[100]; //memory inefficiency!
	
	int* ptr;
	ptr = new int;
	
	int* ptr2 = new int;
	
	int* arrptr;
	arrptr = new int[100];
	
	delete ptr;
	
	delete [] arrptr;
	
	/*
	//Memory Leakage
	for(int i=0; i< 1000000000; i++)
	{
		int * ptr =new int;
		//delete ptr;
	}
	*/
	
	//Dangling Pointer
	int* ptr3 = new int;
	cout<<ptr3<<endl;
	delete ptr3;
	cout<<ptr3<<endl;
	ptr3 = NULL;
	
	int a;
	int &b;
	&b=a;
	
}
