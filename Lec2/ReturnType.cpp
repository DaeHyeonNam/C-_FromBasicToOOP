#include <iostream>

using namespace std;

int ReturnTypeInt() //�Լ� �� ���� ����Ÿ����  
{
	return 3; // return �Ϸ��� ������ ���������� ���� ����� �Ѵ�. 
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
