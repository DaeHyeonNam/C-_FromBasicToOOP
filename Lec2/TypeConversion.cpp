#include <iostream>

using namespace std;

int main()
{
	double dou = 2.6435;
	int newbie;
	
	newbie = dou;
	cout<< "newbie: "<<newbie<<endl; //right side type to left side type
	
	cout<<"newbie* dou = "<<newbie*dou<<endl; //higher ranked data type
	
	/*
	Higher data type
		long double (8 bytes)
		double (8 bytes)
		float (4 bytes)
		unsigned long (4 bytes)
		long (4 bytes)
		unsigned int (4 bytes)
		int (4 bytes)
		unsigned short (2 bytes)
		short (2 bytes)
		char
	Lower data type
	*/
	
	cout<<"newbie* dou = "<<int(newbie*dou)<<endl; //higher ranked data type

}
