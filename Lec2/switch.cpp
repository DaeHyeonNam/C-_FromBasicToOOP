#include <iostream>

using namespace std;

int main()
{
	char choice;
	cout<<"choice: ";
	cin>>choice;
	
	if(choice == 'A')
		cout<< "You entered A"<<endl;
	else if(choice == 'B')
		cout<< "You entered B"<<endl;
	else
		cout<< "You did not enter A or B"<<endl;
		
	switch(choice) //choice == A일때, choice == B일때 이런 의미를 가진다. break가 없으면 밑의 코드까지 계속해서 실행된다 
	{
		case 'A':
			cout<<"You entered A"<<endl;
			break;
		case 'B':
			cout<<"You entered B"<<endl;
			break;
		default:
			cout<< "You did not enter A or B"<<endl;
	}
}
