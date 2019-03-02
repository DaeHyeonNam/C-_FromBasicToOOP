#include<iostream>

using namespace std;

class parent
{
private:
	int x,y;
public:
	parent(int x, int y)
	{
		this->x =x;
		this->y =y;
	}

};

class child : public parent
{
public:
	child(int x, int y): parent(x,y)
	{
		
	}
};

int main()
{
	child a(3,4);
}
