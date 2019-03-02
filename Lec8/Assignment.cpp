#include <iostream>

using namespace std;

class phone
{
	private:
		int battery;
		
		/*
		declare human class as a friend
		*/
		
	public:
		phone(int battery =100)
		{
			this->battery= battery;
		}
	
};
class human
{
	private:
		phone* myPhone;
		static int num_phone;
		
	public:
		//constructors
		human(int battery)
		{
			this->myPhone = new phone(battery);
			num_phone++;
		}
		
		//human(const human& a)
		/*
			make a copy constructor that allocate memory to myphone. 
			And they should have same battery value;
		*/
		
		human()
		{
			this->myPhone = new phone;
			num_phone++;
		}
		
		//Member functions
		int get_phone_battery() const
		{
			return myPhone->battery; //it can access to phone class' private region because human class is a friend of phone class
		}
		
		/*
		
			make a static function that returns num_phone with name of "get_numPhone"
		
		*/
		
		/*
		
			make a assign operator that assigns same value of battery.
		
		*/
		
		//destructor
		~human()
		{
			delete myPhone;
		}
};
/*
initialize static variable in human class
*/


int main()
{
	human A(40);
	human B;
	
	cout<<"We have "<<human::get_numPhone()<<" phones"<<endl; //2
	cout<<"The battery level of A's phone is "<< A.get_phone_battery()<<endl; //40
	
	human C=A;
	cout<<"We have "<<human::get_numPhone()<<" phones"<<endl; //3
	cout<<"The battery level of C's phone is "<< C.get_phone_battery()<<endl; //40
	
	human D;
	D=B;
	cout<<"We have "<<human::get_numPhone()<<" phones"<<endl; //4
	cout<<"The battery level of C's phone is "<< D.get_phone_battery()<<endl; //100
}
