#include <iostream>

using namespace std;

enum week {sun, mon, tue, wed, thu, fri, sat}; //우리가 실제 생활에서 사용하는 언어를 숫자와 이어주는 역할을 한다. 
 		//  0    1    2    3    4    5    6
int main()  
{  
    week day1;  
    
    day1=fri;  
    cout<<"day1: "<<day1<<endl;// 모두 숫자형태로 술력이 된다. 
    cout<<"fri: "<<fri<<endl;
    
	day1=mon;  
    cout<<"day1: "<<day1<<endl;
    cout<<"mon: "<<mon<<endl;
    
	return 0;  
}  


