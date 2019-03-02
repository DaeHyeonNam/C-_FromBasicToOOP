#include <iostream>

using namespace std;

int Decreasing_sum_by_Value(int a)
{
	int sum=0;
	for(int i=0; i<a; i++)
	{
		sum+=i;
	}
	return sum;
}

int Decreasing_sum_by_Ref(const int& a) //constant reference
{
	int sum=0;
	for(int i=0; i<a; i++)
	{
		sum+=i;
	}
	return sum;
}

int main()
{
	int a= 10;
	
	cout<<Decreasing_sum_by_Value(a)<<endl;
	cout<<Decreasing_sum_by_Ref(a)<<endl;
}
