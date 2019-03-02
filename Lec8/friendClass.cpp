#include <iostream>

using namespace std;

class person
{
	private:
		int height;
		friend class human; //human class�� friend�� ����. 
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
			this->height = a.height; // person�� private ������ ������ �� �ִ�. 
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
