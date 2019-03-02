#include <iostream>

using namespace std;

class Animal //abstract class //it cannot make an object anymore
{
public:
	virtual void feeding() =0; //pure virutal function
};

class Cat : public Animal
{
public:
	virtual void feeding()
	{
		cout<<"feeding cat"<<endl;
		//feed a fish to the cat
	}
};
class Rabbit : public Animal
{
public:
	virtual void feeding()
	{
		cout<<"feeding rabbit"<<endl;
		//feed a carrot to the rabbit
	}
};

int main()
{
	Animal C;
	
	Animal* a = new Cat; //upcasting //child class object with parent class pointer
	Animal* b = new Rabbit; //upcasting
	//Animal* e = new Animal; Error

	a->feeding();
	b->feeding();
	
}
