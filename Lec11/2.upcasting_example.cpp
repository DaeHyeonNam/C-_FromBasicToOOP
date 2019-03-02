#include <iostream>

using namespace std;

class Animal
{
public:
	void feeding()
	{		
	}
};

class Cat : public Animal
{
public:
	void feeding()
	{
		//feed a fish to the cat
	}
};
class Rabbit : public Animal
{
public:
	void feeding()
	{
		//feed a carrot to the rabbit
	}
};

void FeedAnimal(Animal* a) //upcasting //child class object with parent class pointer
{
	a->feeding();
}

int main()
{
	Cat A;
	Rabbit B;
	
	A.feeding();
	B.feeding();
	
	FeedAnimal(&A);
}
