//Memory dangling

#include <iostream>

using namespace std;

int main()
{
	int* hey = new int[100];
	hey[99]=10;
	delete [] hey; // delete 후에는 보호받지 못한다. 
	
	 
	
	for(int i=0; i<100000000; i++)
	{
		int * a = new int ;
		*a=999999;
	}
	
	cout<<hey[99]<<endl; 
}
