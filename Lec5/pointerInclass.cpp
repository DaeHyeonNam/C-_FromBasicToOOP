#include <iostream>

using namespace std;
 
class person
{
	private:
		int * ptr;
	public:
		person()
		{
			cout<<"constructed"<<endl;
			ptr = new int;	
		}	
		
		~person()
		{
			cout<< "deleted"<<endl;
			//delete ptr;
		}
};

int main()
{
	//person a;// ������ ��  
	
	person * b= new person;//�����Ҵ�  
	delete b;
	
	cout<<"program finished"<<endl;
}
