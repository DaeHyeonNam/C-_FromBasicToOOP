#include <iostream>
#include "int_made.h"

using namespace std;

class int_pair
{
	private:
		int_ first;
		int_ second;
	public:
		int_pair(int first=0, int second=0):first(first), second(second)
		{
		}
		int_pair(int_pair& a):first(a.first), second(a.second)
		{
		}

		int_pair operator+(const int_pair& A)
		{
			int_pair temp;
			temp.first= this->first+ A.first;
			temp.second= this->second+ A.second;
			
			//or int_pair temp(this->first+ A.first, this->second+ A.second);
			
			return temp;
		}

		int_pair& operator=(const int_pair& A)
		{
			this->first = A.first;
			this->second = A.second;
			
			return *this;
		}


		int_pair& operator++()
		{
			this->first++;
			this->second++;
		}

		int getFirst()
		{
			return this->first;
		}

		int getSecond()
		{
			return this->second;
		}
};

int main()
{
	int_pair a(10,20);
	int_pair b(20,40);
	int_pair c = a; //copy constructor
	
	int_pair d; // default d= 0,0 

	cout<<d.getFirst()<<" "<<d.getSecond()<<endl;
	
	d= a+b; // + operator and = operator //d = 30, 60 
	
	cout<<d.getFirst()<<" "<<d.getSecond()<<endl;

	++a; // prefix operator //increase each value by one.
	
	cout<<a.getFirst()<<" "<<a.getSecond()<<endl;	
}
