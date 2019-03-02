#include<iostream>

using namespace std;

class parent
{
public:
	parent()
	{
		cout<<"parent class constructed"<<endl;	
	}	
	
	~parent()
	{
		cout<<"parent class detroyed"<<endl;
	}
};

class child : public parent
{
public:
	child()
	{
		cout<<"child class constructed"<<endl;	
	}	
	
	~child()
	{
		cout<<"child class destroyed"<<endl;
	}
	
};

int main()
{
	child a;
}
