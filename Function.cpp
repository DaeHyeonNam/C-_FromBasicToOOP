#include <iostream>

using namespace std;

int JustDefinition(int a)//함수는 이렇게 그냥 정의만 있는 친구도 있고,
{
	cout<< "I got "<<a<<endl;
}

int DeclareAndDefine(int);//이렇게 먼저 선언하고 뒤에 정의하는 친구도 있다. 이경우 semicolon붙여야하고 parameter에 변수 이름이 없어도 된다.

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
