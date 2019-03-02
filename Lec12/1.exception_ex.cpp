#include <iostream>

using namespace std;

int main()
{
	cout<< "division example"<<endl;
	
	int a, b;
	
	try
	{
		cin>>a>>b;	
		if(b==0)
			throw 0;
	}
	catch(int k)
	{
		cout<< "b is zero"<<endl;
	}
}
