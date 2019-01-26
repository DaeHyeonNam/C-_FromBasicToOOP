#include <iostream>

using namespace std;

int main()
{
	int a;
	int *ptr = &a;
	
	int* ptr2;
//	ptr2 = &a;
	
	ptr2 = NULL; 
	ptr2 = 0;
	
	a= static_cast<float>(a);
	float* flptr;
	flptr= &a; //error
	
}
