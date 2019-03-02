#include <iostream>

using namespace std;

template<class T>
class person
{
private:
	T height;
public:
	person(T height)
	{
		this->height = height;	
	}	
	T getHeight()
	{
		return height;
	}
};

int main()
{
	person<int> A(3); // you should specify the data type you will use! 
	cout<<A.getHeight()<<endl;
}
