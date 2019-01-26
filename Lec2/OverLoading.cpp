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
	
	//같은 이름의 함수를 parameter의 종류, 갯수로 구분하여 call할 수 있다 
	OverLoading(a);
	
	OverLoading(a,b);
	
	OverLoading(a,c);
}
