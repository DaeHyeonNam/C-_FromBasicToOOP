#include <iostream>

using namespace std;

void OverLoading(int one)
{
	cout<<"There is one parameter."<<endl;
}
void OverLoading(int one, int two)
{
	cout<<"There are two integer parameters."<<endl;
}
void OverLoading(int one, double two_dou)
{
	cout<<"There are one integer parameter and one double parameter."<<endl;
}

int main()
{
	int a,b;
	double c;
	
	//���� �̸��� �Լ��� parameter�� ����, ������ �����Ͽ� call�� �� �ִ� 
	OverLoading(a);
	
	OverLoading(a,b);
	
	OverLoading(a,c);
}
