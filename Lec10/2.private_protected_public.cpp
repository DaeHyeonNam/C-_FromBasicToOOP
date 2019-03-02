#include <iostream>

using namespace std;

class parent
{
	private:
		int pvt;
	protected:
		int ptc;
	public:
		int pbl;
};

class child1: public parent
{
public:
	child1()
	{
		//this->pvt = 10; Error
		this->ptc = 10;
		this->pbl = 10;
	}
};

class child2: protected parent
{
public:
	child2()
	{
		//this->pvt = 10; Error
		this->ptc = 10;
		this->pbl = 10;
	}
};

class child3: private parent
{
public:
	child3()
	{
		//this->pvt = 10; Error
		this->ptc = 10;
		this->pbl = 10;
	}
};

int main()
{
	child1 a;
		//a.pvt = 20; Error
		//a.ptc = 20; Error
		a.pbl = 20;
	child2 b;
		//b.pvt = 20; Error
		//b.ptc = 20; Error
		//b.pbl = 20; Error
	child3 c;
		//c.pvt = 20; Error
		//c.ptc = 20; Error
		//c.pbl = 20; Error
}
