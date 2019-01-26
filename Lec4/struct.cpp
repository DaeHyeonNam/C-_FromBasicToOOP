#include <iostream>

using namespace std;

struct Person //상속이 불가능! 이외에 나머진 기능이 다 비슷함. 
{
	//Default가 public!  
	 
	private:
		int height ; //member variable 
		int weight;
	public:
		Person(int height_=200, int weight_=100):height(height_), weight(weight_) //다양한 member variable 초기화 방법 
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

Person WhoIsTallest(Person students[10]) //이런 식으로 class type을 return할 수 있다. 
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
	//Person A(); 파라미터가 없을 때  A()이렇게 쓰면 안됨!
	Person A; // 없을 땐 괄호를 없애야 함. 
	
	Person students[10]= {Person(183,60),Person(154,60),Person(153,60),Person(193,60),
						Person(13,60),Person(173,60),Person(156,60),Person(153,60),
						Person(154,60),Person(112,60)}; //이런 식으로 array의 초기화 가능 
	cout<<"Tallest: "<<WhoIsTallest(students).getHeight()<<endl;
}
