#include <iostream>

using namespace std;

union student //�ϳ��� �޸� ������ ������ -> �ϳ��� ������ ����� �� �ִ� 
{
	int hey1;
	double hey2;
	float hey3;	
};

int main()
{
	student s1 ;
	s1.hey1= 234;
	s1.hey2 = 2543.345;
	
	cout<<s1.hey1<<endl;
	cout<<s1.hey2<<endl;
	cout<<s1.hey3<<endl;
}
