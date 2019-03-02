#include <iostream>

using namespace std;

class person
{
private:
	int height;
public:
	person(int height)
	{
		this->height = height;	
	}	
	int getHeight()
	{
		return height;
	}
};

int main()
{
	person A(3);
	cout<<A.getHeight()<<endl;
}
