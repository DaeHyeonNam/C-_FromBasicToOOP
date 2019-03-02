#include <iostream>

using namespace std;

template<class T>
void swap_(T& a, T& b)
{
	T temp = a;
	a= b;
	b= temp;
}

int main()
{
	int a= 0, b=1;
	char A='A', Z='Z';
	
	cout<<"----before swap----"<<endl;
	cout<<"a: "<<a<<" "<<"b: "<<b<<endl;
	cout<<"A: "<<A<<" "<<"Z: "<<Z<<endl;
	
	swap_(a,b);
	swap_(A,Z);
	
	cout<<"----after swap----"<<endl;
	cout<<"a: "<<a<<" "<<"b: "<<b<<endl;
	cout<<"A: "<<A<<" "<<"Z: "<<Z<<endl;
}
