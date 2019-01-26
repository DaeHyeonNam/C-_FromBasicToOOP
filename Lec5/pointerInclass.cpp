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
	//person a;// 정적할 당  
	
	person * b= new person;//동적할당  
	delete b;
	
	cout<<"program finished"<<endl;
}
