#include <iostream>

using namespace std;

void DefaultCheck(int value = 0) //default���� �־������μ� ������ ���� �ʾ��� �� value�� 0���� �����ϰ� �Լ� ����. 
{
	cout<< "value: "<<value<<endl;
}

void Declare(int value = 0); // declare�� default�� �� �־���� �ȴ�. 

int main()
{
	DefaultCheck(100);
	
	DefaultCheck();
	
	Declare(100);
	
	Declare();
}


void Declare(int value)
{
	cout<<"value: "<<value<<endl;
}
