#include <iostream>

using namespace std;

class person
{
	private:
		int height;
	public:
		person(int height)
		{
			this->height = height;
		}
		
		int getSomething()
		{
			cout<<"this is height"<<endl;
			return height;
		}
};

class student : public person
{
	private:
		double GPA;
	public:
		student(double GPA, int height):person(height)
		{
			this->GPA =GPA;
		}
		double getSomething() //overriding It must be same with the base class' function!
		{
			cout<<"this is GPA"<<endl;
			return GPA;
		}
};

int main()
{
	student a(3.5, 10);
	cout<<a.getSomething()<<endl;
	
	cout<<a.person::getSomething()<<endl;	
}
