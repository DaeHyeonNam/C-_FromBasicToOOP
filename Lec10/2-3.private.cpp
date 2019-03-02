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
	child3 c;
	//c.pvt = 20; Error
	//c.ptc = 20; Error
	//c.pbl = 20; Error
}
