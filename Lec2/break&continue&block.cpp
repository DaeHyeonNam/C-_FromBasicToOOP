#include <iostream>

using namespace std;

int main()
{
	
	for(int i=0; i<10; i++)
	{
		cout<<i<<endl;
	}
	for(int i=0; i<10; i++)
	{
		if(i==4)
		{
			continue;//이 아래의 명령문을 실행하지 않고 건너뛰고 다시 계속해서 loop를 돈다. 
		}
		cout<<i<<endl;
	}
	
	for(int i=0; i<10; i++)
	{
		if(i==4)
		{
			break; //가장 가까운 상위 loop를 탈출한다. 
		}
		cout<<i<<endl;
	}
	
	
	for(int i=0; i<10; i++)
		cout<<i<<endl;
	int hello = 1;
	if(hello == 1)
		cout<< "hello is 1"<<endl;
}
