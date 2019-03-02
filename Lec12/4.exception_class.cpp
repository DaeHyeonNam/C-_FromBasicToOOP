#include <iostream>

using namespace std;

class ex
{
public:
	int a;
	int b;	
	
	ex(int a, int b)
	{
		this->a = a;
		this->b = b;
	}
};

int main()
{
	cout<< "division example"<<endl;
	
	int a, b;
	try
	{
		cin>>a>>b;	
		if(b==0)
		{	
			ex A(a,b);
			throw A;
		}
	}
	catch(ex A)
	{
		cout<<A.a<<" cannot divided by "<<A.b<<endl;
	}
}
