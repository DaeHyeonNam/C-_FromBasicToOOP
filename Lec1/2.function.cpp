#include <iostream>

using namespace std;

int JustDefinition(int a)//�Լ��� �̷��� �׳� ���Ǹ� �ִ� ģ���� �ְ�,
{
	cout<< "I got "<<a<<endl;
}

int DeclareAndDefine(int);//�̷��� ���� �����ϰ� �ڿ� �����ϴ� ģ���� �ִ�. �̰�� semicolon�ٿ����ϰ� parameter�� ���� �̸��� ��� �ȴ�.

int main()
{
	int a=0;
	JustDefinition(a);
	
	int b=10;
	DeclareAndDefine(b);
}

int DeclareAndDefine(int a)
{
	cout<<"I got"<< a<<endl;
}

