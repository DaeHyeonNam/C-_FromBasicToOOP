#include <iostream>

using namespace std;

class person
{
	private:
		int height;
		friend int getHeight(person& ); // getHeight 함수를 friend로 지정. 
	public:
		person(int height)
		{
			this->height = height;
		}

};

int getHeight(person& a)
{
	cout<<"his height is : "<<a.height<<endl; //person의 private 영역에 접근 가능 
	
	return a.height;
}

int main()
{
	person A(10);	
	getHeight(A);
} 
