#include <iostream>

using namespace std;

class rectangle //OOP
{
	private:
		int width;
		int height;
	public:
		int get_width()
		{
			return width;
		}
		int get_height()
		{
			return height;
		}
		
		int set_width(int a)
		{
			width= a;
		}
		int set_height(int a)
		{
			height= a;
		}
		
		int get_Area()
		{
			return width*height;
		}
};

int main()
{
	int a= 10;
	int b= 20;
	
	a= b*a;
	//procedural Programming

	rectangle A;
	A.set_height(10);
	A.set_width(30);

	cout<< A.get_height()<<endl;
}

