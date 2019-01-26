#include <iostream>

using namespace std;

struct Person //����� �Ұ���! �̿ܿ� ������ ����� �� �����. 
{
	//Default�� public!  
	 
	private:
		int height ; //member variable 
		int weight;
	public:
		Person(int height_=200, int weight_=100):height(height_), weight(weight_) //�پ��� member variable �ʱ�ȭ ��� 
		{
		}
		
		int getHeight() //member function
		{
			return height;
		}
		int getWeight()
		{
			return weight;
		}
};

Person WhoIsTallest(Person students[10]) //�̷� ������ class type�� return�� �� �ִ�. 
{
	int max =0;
	int index =-1;
	for(int i=0; i<10; i++)
	{
		if(students[i].getHeight()> max)
		{
			max=students[i].getHeight();
			index = i;
		}
	}
	
	return students[index];
}

int main()
{
	//Person A(); �Ķ���Ͱ� ���� ��  A()�̷��� ���� �ȵ�!
	Person A; // ���� �� ��ȣ�� ���־� ��. 
	
	Person students[10]= {Person(183,60),Person(154,60),Person(153,60),Person(193,60),
						Person(13,60),Person(173,60),Person(156,60),Person(153,60),
						Person(154,60),Person(112,60)}; //�̷� ������ array�� �ʱ�ȭ ���� 
	cout<<"Tallest: "<<WhoIsTallest(students).getHeight()<<endl;
}
