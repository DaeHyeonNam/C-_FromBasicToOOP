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
			continue;//�� �Ʒ��� ��ɹ��� �������� �ʰ� �ǳʶٰ� �ٽ� ����ؼ� loop�� ����. 
		}
		cout<<i<<endl;
	}
	
	for(int i=0; i<10; i++)
	{
		if(i==4)
		{
			break; //���� ����� ���� loop�� Ż���Ѵ�. 
		}
		cout<<i<<endl;
	}
	
	
	for(int i=0; i<10; i++)
		cout<<i<<endl;
	int hello = 1;
	if(hello == 1)
		cout<< "hello is 1"<<endl;
}
