#include <iostream>

using namespace std;

int GetOneDataFromUser()
{
	int input;
	cout<<"one data: ";
	cin>> input;
	
	return input;
}

void GetTwoDataFromUser(int& b, int& c) //&���� �ּҸ� �����ϰԵǾ� �ϳ��� ���� �ٲ�� �ٸ� �ϳ��� ���� �ٲ��. 
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
	GetTwoDataFromUser(b,c); //�ΰ��� �����͸� return�� �� ���� �� ! call by reference! 
	cout<<"b,c: "<<b<<" "<<c<<endl;
	
}
