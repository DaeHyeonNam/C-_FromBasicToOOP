#include <iostream>

using namespace std;

class person
{
	private:
		int height;
	public:
		person(int height)
		{
			this-> height = height;
			
		}
		
		person operator+(const person& a) // plus operator 
		{
			person temp(this->height+ a.height);
			return temp;
		}
		
		/*
		person& operator=(const person& a) // assign operator without copy constructor
		{
			this->height = a.height;
		
			return *this;		
		}*/
		
		
		person operator=(const person& a)
		{
			this->height = a.height;
		
			return *this;		
		}
		
		
		int getHeight()
		{
			return this->height;
		}	
		
};

int main()
{
	person A(10);
	person B(20);
	
	person C(10);
	C= A+B; //plus operator and copy constructor
	cout<<C.getHeight()<<endl;
}
