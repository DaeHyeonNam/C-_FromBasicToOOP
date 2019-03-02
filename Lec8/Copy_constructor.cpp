#include<iostream>

using namespace std;

class person
{
	private:
		int height;
		int * weightPtr;
	public:
		person(int height, int weight)
		{
			this->height = height;
			this->weightPtr= new int;
			*(this->weightPtr) = weight;
		}
		person(const person& a);
	
		int getHeight()
		{
			return this->height;
		}
		int getWeight()
		{
			return *(this->weightPtr);
		}
		
		~person()
		{
			delete weightPtr;
		}
};

int main()
{
	person A(10,20);
	person B = A;
	//person C(A);
	
	cout<<B.getWeight()<<endl;
}






person::person(const person& a)
{
	this->height = a.height;
	this->weightPtr = new int;
	*(this->weightPtr) = *a.weightPtr;
}
