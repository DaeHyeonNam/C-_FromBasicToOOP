#include <iostream>

using namespace std;

void swap_pointer(int* a_, int *b_)
{
	int temp =*a_;
	*a_= *b_;
	*b_ =temp;
}

void swap_ref(int& a, int& b)
{
	int temp = a;
	a= b;
	b= temp;
}

int main()
{
	int a= 1; 
	int b= -1;
	//swap_ref(a,b);
	//cout<<"a: "<<a<<" b: "<<b<<endl;

	swap_pointer(&a,&b);
	cout<<"a: "<<a<<" b: "<<b<<endl;
	
}
