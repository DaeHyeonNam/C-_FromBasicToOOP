#include <iostream>

using namespace std;

class laptop
{
	private:
		double battery_cycle;
		int num_resell;
	public:
		laptop(int battery_cycle =100, int num_resell=0):battery_cycle(battery_cycle), num_resell(num_resell)
		{
		}
		void sold(int month_used)
		{
			battery_cycle -= month_used*2;
			num_resell+=1;
		}
		void show_status()
		{
			cout<< "battery cycle: "<<battery_cycle<<endl;
			cout<< "num of resell: "<<num_resell<<endl;
		}
};

class person
{
	private:
		int money;
		int num_laptop;
	public:
		person(int money, int num_laptop =0):money(money), num_laptop(num_laptop)
		{
		}
		void show_status()
		{
			cout<< "money: "<<money<<endl;
			cout<< "num of laptop: "<<num_laptop<<endl;
		}
		void sell_laptop(person& B, laptop& notebook, int month_used, int price )
		{
			num_laptop -=1;
			money+=price;
			B.buy_laptop(price);
			notebook.sold(month_used);
		}
		void buy_laptop(int price)
		{
			money -=price;
			num_laptop +=1;
		}
		
};

int main()
{
	
	
	person A(10000, 1);
	person B(10000, 0);
	laptop A_notebook;
	
	A.sell_laptop(B, A_notebook, 4, 400);
	
	cout<<"A status: "<<endl;
	A.show_status();
	cout<<endl;
	
	cout<<"B status: "<<endl;
	B.show_status();
	cout<<endl;
	
	cout<<"notebook status: "<<endl;
	A_notebook.show_status();
	
	
	return 0;
	
	
}



