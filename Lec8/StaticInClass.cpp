#include <iostream>

using namespace std;

class person
{
	private:
		static int numPeople; //��� person�� ��ü�� �� ��������� �����Ѵ�.(��� �ٰ��� ���.) 
		int height;
	public:
		person(int height)	
		{
			this-> height = height;
			numPeople++;
		}
		static int getNumPeople() //��� person�� ��ü�� �� ����Լ��� ����. 
		{
			//cout<<this->height<<endl; //static �Լ������� this ������ �Ұ���. 
			return numPeople;
		}
};
int person::numPeople=0; // static ���� �ʱ� 

int main()
{
	person A(10);
	person B(100);
	
	cout<<A.getNumPeople()<<endl; //2
	
	cout<<person::getNumPeople()<<endl; //�� ���� �����ϴ� �Լ� �̹Ƿ� �̷��Ե� ���� ����! 
}
