#include <iostream>

using namespace std;

class person
{
	private:
		static int numPeople; //모든 person의 객체가 이 멤버변수를 공유한다.(모두 다같이 사용.) 
		int height;
	public:
		person(int height)	
		{
			this-> height = height;
			numPeople++;
		}
		static int getNumPeople() //모든 person의 객체가 이 멤버함수를 공유. 
		{
			//cout<<this->height<<endl; //static 함수에서는 this 접근이 불가능. 
			return numPeople;
		}
};
int person::numPeople=0; // static 변수 초기 

int main()
{
	person A(10);
	person B(100);
	
	cout<<A.getNumPeople()<<endl; //2
	
	cout<<person::getNumPeople()<<endl; //다 같이 공유하는 함수 이므로 이렇게도 접근 가능! 
}
