#include <iostream>

using namespace std;

class person
{
	private:
		int height;
		friend class human; //human class를 friend로 지정. 
	public:
		person(int height)
		{
			this->height = height;
		}
};

class human
{
	private:
		int height;
	public:
		human(person& a)
		{
			this->height = a.height; // person의 private 영역에 접근할 수 있다. 
		}
		int getHeight()
		{
			return this->height;
		}	
};

int main()
{
	person A(10);	
	human B(A);
	cout<<B.getHeight()<<endl;
} 
