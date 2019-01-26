#include <iostream>

using namespace std;

void ArrayPrint(int arr[]) // parameter 형식! 
{
	cout<<"0: "<<arr[0]<<endl;
	cout<<"1: "<<arr[1]<<endl;
	cout<<"2: "<<arr[2]<<endl;
	cout<<"3: "<<arr[3]<<endl;
	cout<<"4: "<<arr[4]<<endl;
}

int main()
{
	int arr[5]; //5개의 int칸이 생김. 
	
	int arr1[5] = {1,2,3,4,5};//array 초기화 
	ArrayPrint(arr1); //parameter에 array이름만 넣어서 call 
	
	arr1[4] = 10;
	ArrayPrint(arr1);
	
	arr1[4] = arr1[3] + arr1[2]; //이런 식으로 접근 가능 
	ArrayPrint(arr1);
	
	
}
