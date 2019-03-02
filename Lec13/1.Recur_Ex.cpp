#include <iostream>

using namespace std;

void countDown(int num)
{
	if(num == 0)
	{
		cout<<num<<endl;
		cout<<"Bomb!"<<endl;
	}
	else
	{
		cout<<num<<endl;
		countDown(num-1);
		//cout<<num<<endl;
	}
}

int main()
{
	countDown(10);
}
