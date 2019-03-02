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
		
		int getHeight()
		{
			return this->height;
		}	

};

int main()
{
	person A(10);
	person B(20);
	
	person C= A.operator+(B); //plus operator
	//person C= A+B; //plus operator and copy constructor
	cout<<C.getHeight()<<endl;
}
