#include <iostream>

using namespace std;

void ArrayPrint(int arr[]) // parameter ����! 
{
	cout<<"0: "<<arr[0]<<endl;
	cout<<"1: "<<arr[1]<<endl;
	cout<<"2: "<<arr[2]<<endl;
	cout<<"3: "<<arr[3]<<endl;
	cout<<"4: "<<arr[4]<<endl;
}

int main()
{
	int arr[5]; //5���� intĭ�� ����. 
	
	int arr1[5] = {1,2,3,4,5};//array �ʱ�ȭ 
	ArrayPrint(arr1); //parameter�� array�̸��� �־ call 
	
	arr1[4] = 10;
	ArrayPrint(arr1);
	
	arr1[4] = arr1[3] + arr1[2]; //�̷� ������ ���� ���� 
	ArrayPrint(arr1);
	
	
}
