#include <iostream>

using namespace std;

void DefaultCheck(int value = 0) //default값을 넣어줌으로서 변수를 넣지 않았을 때 value를 0으로 생각하고 함수 실행. 
{
	cout<< "value: "<<value<<endl;
}

void Declare(int value = 0); // declare시 default를 꼭 넣어줘야 된다. 

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
