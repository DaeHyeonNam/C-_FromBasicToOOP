#include <iostream>

using namespace std;

class person
{
	private:
		int height;
		friend int getHeight(person& ); // getHeight �Լ��� friend�� ����. 
	public:
		person(int height)
		{
			this->height = height;
		}

};

int getHeight(person& a)
{
	cout<<"his height is : "<<a.height<<endl; //person�� private ������ ���� ���� 
	
	return a.height;
}

int main()
{
	person A(10);	
	getHeight(A);
} 
