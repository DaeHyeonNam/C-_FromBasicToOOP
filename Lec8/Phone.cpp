#include <iostream>

using namespace std;

class phone
{
	private:
		int battery;
		friend class human;
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
		human(int battery)
		{
			this->myPhone = new phone(battery);
			num_phone++;
		}
		human(const human& a)
		{
			this->myPhone = new phone(a.get_phone_battery());
			num_phone++;
		}
		human()
		{
			this->myPhone = new phone;
			num_phone++;
		}
		
		int get_phone_battery() const
		{
			return myPhone->battery;
		}
		static int get_numPhone()
		{
			return num_phone;
		}
		human& operator=(const human& a)
		{
			(this->myPhone)->battery = (a.myPhone)->battery;
		}
		
		~human()
		{
			delete myPhone;
		}
};
int human::num_phone =0;


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
