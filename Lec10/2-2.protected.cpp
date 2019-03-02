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

int main()
{
	child2 b;
	//b.pvt = 20; Error
	//b.ptc = 20; Error
	//b.pbl = 20; Error
}
