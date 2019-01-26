#include <iostream>

using namespace std;

class Person
{
	private:
		int money; //value
		int num_product;
		int price;
	public:
		Person(int money_, int num_product_, int price_) //Constructor
		{
			money = money_;
			num_product = num_product_;
			price = price_;
		}	
		Person(int price_) //Overloading Constructor
		{
			price = price_;
		}
		
		int get_money() //Inline function
		{
			return money;
		}
		int get_num_product() 
		{
			return num_product;
		}
		void set_num_product(const int& a) //const int&
		{
			num_product = a;
		}
		void set_money(int a)
		{
			money = a;
		}

		void buy_product(int num);
		void sell_product(Person& A, int num);
		
		
		~Person() //Desctructor
		{
		}
};

void Person::buy_product(int num) //implement //Dot operator!!
{
	num_product += num;
	money -= num*price;
}
void Person::sell_product(Person& person, int num) 
{
	num_product -=num;
	money +=price*num;
	
	person.buy_product(num);
}
 

int main()
{
	Person A(10000,10, 500);
	Person B(10000,10, 500);
	
	cout<<"A Money: "<<A.get_money()<<endl;
	cout<<"A Product_num: "<<A.get_num_product()<<endl;
	
	cout<<"B Money: "<<B.get_money()<<endl;
	cout<<"B Product_num: "<<B.get_num_product()<<endl;
	
	A.sell_product(B, 5);
	cout<<endl<<"Transaction Done"<<endl<<endl;
	
	cout<<"A Money: "<<A.get_money()<<endl;
	cout<<"A Product_num: "<<A.get_num_product()<<endl;
	
	cout<<"B Money: "<<B.get_money()<<endl;
	cout<<"B Product_num: "<<B.get_num_product()<<endl;
	
	
}
