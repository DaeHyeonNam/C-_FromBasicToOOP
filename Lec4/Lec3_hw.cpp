#include <iostream>

using namespace std;

class FruitSeller
{
	private:
		int APPLE_PRICE;
		int numOfApples;
		int myMoney;
	public:
		FruitSeller(int APPLE_PRICE, int numOfApples,int myMoney)
		{

		} 
		int SalesApples(int money);
		
		void ShowSalesResult()
		{
		}
		//Write your code here

		//You need Constructor and SaleApples,ShowSalesResult function.
		//please declare functions here and define functions in outside of class. 

};
int FruitSeller::SalesApples(int money)
{
	
	return Apple_num;
} 
//Write your code here


class FruitBuyer
{
	private:
		int myMoney;
		int numOfApples;
	public:
		//Write your code here
		FruitBuyer(int myMoney, int numOfApples=0)
		{
		}
		
		void ShowBuyResult()
		{
		}
		//You need Constructor and BuyApples,ShowBuyResult function.
		//please declare functions here and define functions in outside of class. 
		
		void BuyApples(FruitSeller &seller, int money); //this is hint
			
};
//Write your code here
void FruitBuyer::BuyApples(FruitSeller & seller, int money)
{
}

int main()
{
	FruitSeller seller(1000,20,0);
	
	FruitBuyer buyer(5000);
	
	buyer.BuyApples(seller, 2000);
	
	cout<<"How many apples did you sell?"<<endl;
	seller.ShowSalesResult();
	cout<<"How many apples did you buy? And How much money do you have left?"<<endl;
	buyer.ShowBuyResult();
	
	return 0;
}
