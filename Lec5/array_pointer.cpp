#include <iostream>

using namespace std;

int main()
{
	int arr[10] ={1,2,3,4,5,6,7,8,9,10};
	
	cout<< "arr: "<< arr<<endl;
	cout<< "arr[1]: "<<arr[1]<<endl;
	cout<< "*(arr+1): "<<*(arr+1)<<endl;
	
	double arr2[3] = {1.345,5.6546,67.567};
	cout<< *(arr2+1)<<endl;
}
