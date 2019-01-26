#include <iostream>

using namespace std;

int GetOneDataFromUser()
{
	int input;
	cout<<"one data: ";
	cin>> input;
	
	return input;
}

void GetTwoDataFromUser(int& b, int& c) //&사용시 주소를 공유하게되어 하나의 값이 바뀌면 다른 하나의 값도 바뀐다. 
{
	cout<<"two data: ";
	cin>> b>>c;
}

int main()
{
	int a;
	a = GetOneDataFromUser();
	cout<<"a: "<< a<<endl;
	
	int b,c;
	GetTwoDataFromUser(b,c); //두개의 데이터를 return할 수 없을 때 ! call by reference! 
	cout<<"b,c: "<<b<<" "<<c<<endl;
	
}
