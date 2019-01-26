#include <iostream>

using namespace std;

int main()
{
	int val0 = 10;
	int val1 = 10;
	cout<<"++val0: "<< ++val0<<endl;//즉시 값을 올린다. 
	cout<<"val0: "<< val0<<endl;
	cout<<"val1++: "<< val1++<<endl;//이 다음 명령부터 값을 올린다. 
	cout<<"val1: "<< val1<<endl;
}
