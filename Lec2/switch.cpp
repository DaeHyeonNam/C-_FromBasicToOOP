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
		
	switch(choice) //choice == A�϶�, choice == B�϶� �̷� �ǹ̸� ������. break�� ������ ���� �ڵ���� ����ؼ� ����ȴ� 
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
