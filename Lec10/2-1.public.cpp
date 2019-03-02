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

int main()
{
	child1 a;
	//a.pvt = 20; Error
	//a.ptc = 20; Error
	a.pbl = 20;
}
