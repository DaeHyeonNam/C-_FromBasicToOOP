#include <iostream>

using namespace std;

union student //하나의 메모리 공간을 공유함 -> 하나의 변수만 사용할 수 있다 
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
