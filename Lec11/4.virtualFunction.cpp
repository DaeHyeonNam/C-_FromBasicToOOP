#include <iostream>

using namespace std;

class Animal
{
public:
	virtual void feeding() //dynamic binding
	{		
		cout<<"feeding Animal"<<endl;
	}
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
	//Animal* a = new Cat; //upcasting //child class object with parent class pointer
	//Animal* b = new Rabbit; //upcasting
	//Animal* e = new Animal;

	//a->feeding();
	//b->feeding();
	//e->feeding();
	
	
	Animal* AnArr[] = {new Cat, new Rabbit, new Animal};
	
	for(int i=0; i<3; i++)
		AnArr[i]->feeding();	
}
