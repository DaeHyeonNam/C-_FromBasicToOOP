#include <iostream>

using namespace std;

int ReturnTypeInt() //함수 맨 앞의 리터타입을  
{
	return 3; // return 하려는 값으ㅢ 데이터형과 같게 해줘야 한다. 
}

double ReturnTypeDouble()
{
	return 34.543456;
}

string ReturnTypeString()
{
	return "Hello!";
}

int main()
{
	int Integer = ReturnTypeInt();
	double Double = ReturnTypeDouble();
	string String = ReturnTypeString();
	
	cout<< Integer<<endl;
	cout<< Double<<endl;
	cout<< String<<endl;	
}
