#include <iostream>

using namespace std;

int main()
{
	double db=10;
	double* dbptr=&db;
	
	cout<<"double pointer: "<<dbptr<<endl;
	cout<<"double pointer -1: "<<dbptr-1<<endl;
	
	int integer=10;
	int* integerptr=&integer;
	
	cout<<"int pointer: "<<integerptr<<endl;
	cout<<"int pointer -1: "<<integerptr-1<<endl;
	
	int* integerptr2 = &integer;
	integerptr2 -= 2;
	
	cout<<"integerptr - integerptr2: "<< dbptr-integerptr2<<endl<<endl;
	
	if(integerptr > integerptr2)
		cout<<"integerptr is bigger than integerptr2"<<endl;

}
