#include <iostream>

using namespace std;

class int_
{
	private:
		int val;
	public:
		int_(int val=0)
		{
			this->val = val;
		}
		
		//prefix
		int operator++()
		{
			++this->val;
			return this->val;
		}

		//postfix
		int operator++(int)
		{
			int temp = val;
			++val;
			return temp;
		}
	
		//conversion operator -> change 'int_' class to 'int' 
		operator int() 
		{
			return this->val;
		}
		
		// = operator
		int_& operator=(int a)
		{
			this->val = a;
			
			return *this;
		}
		int_& operator=(int_& a)
		{
			this->val = a;
			
			return *this;
		}
};

int main()
{
	int_ a= 10, b=10;
	cout<<a<<endl;

	cout<<"a++: "<< a++<<endl; //postfix
	cout<<"a: "<< a<<endl;
	cout<<"++b: "<< ++b<<endl; //prefix
	cout<<"b: "<< b<<endl;
	
	a=b=20;
	a=b;
	cout<<"a=20 : "<< a<<endl; // =operator check
	
}
