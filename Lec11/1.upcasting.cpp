#include <iostream>

using namespace std;

class Animal
{
		
};

class Rabbit : public Animal
{
	
};
class Cat : public Animal
{
	
};

int main()
{
	Rabbit A;
	Rabbit* rbPtr = new Rabbit;
	
	Animal* AnPtr = new Rabbit; // upcasting //child class object with parent class pointer
}
