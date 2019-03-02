#include <iostream>

using namespace std;

class Animal
{
public:
	virtual void feeding()
	{		
		cout<<"feeding Animal"<<endl;
	}
};

class Cat : public Animal
{
public:
	void feeding()
	{
		cout<<"feeding cat"<<endl;
		//feed a fish to the cat
	}
};
class Rabbit : public Animal
{
public:
	void feeding()
	{
		cout<<"feeding rabbit"<<endl;
		//feed a carrot to the rabbit
	}
};

int main()
{
	Animal* a = new Cat; //upcasting //child class object with parent class pointer
	Animal* b = new Rabbit; //upcasting
	
	Cat* c = static_cast<Cat *>(a); //downcasting  //return to their own type of pointer
	Rabbit* d = (Rabbit *)b; //downcasting
	
	cout<<c<<endl;
	cout<<a<<endl;
	//c->feeding();
	//d->feeding();
	
	a->feeding();
	b->feeding();
	
	
}
