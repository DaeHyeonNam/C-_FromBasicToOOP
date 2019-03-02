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

//inheritance
template<class T>
class student : public person<T> //you shoud specify the data type you will use for parent class
{
private:
	T height;
public:
	student(T height): person<T>(height) ////you shoud specify the data type you will use for parent class
	{
		this->height = height;
	}
};

int main()
{
	student<int> A(3); // you should specify the data type you will use! 
}
