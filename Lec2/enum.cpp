#include <iostream>

using namespace std;

enum week {sun, mon, tue, wed, thu, fri, sat}; //�츮�� ���� ��Ȱ���� ����ϴ� �� ���ڿ� �̾��ִ� ������ �Ѵ�. 
 		//  0    1    2    3    4    5    6
int main()  
{  
    week day1;  
    
    day1=fri;  
    cout<<"day1: "<<day1<<endl;// ��� �������·� ������ �ȴ�. 
    cout<<"fri: "<<fri<<endl;
    
	day1=mon;  
    cout<<"day1: "<<day1<<endl;
    cout<<"mon: "<<mon<<endl;
    
	return 0;  
}  


