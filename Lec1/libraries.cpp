#include <iostream>
#include <vector>
#include <cmath>
#include <fstream>

using namespace std;

int main()
{
	//vector
	vector<int> vec; //vec�̶�� int�� ���� �� �ִ� vector ����(Arrayó�� ������ ���� �� �ִ� container).
	vec.push_back(10); //push_back�� ���� ���� vec�� �� �ڿ�  ���� �� �ְ�,
	vec.pop_back(); //pop_back�� ���� �� ���� ���� ���� �� �ִ�.
	vec[0]=10;
	cout<<vec[0]<<endl; //�̷��� �ε����� ������ �����ϴ�!


	//cmath
	//���� �Լ����� ���� library
	int a = sqrt(16); //16�� ��Ʈ
	int b = pow(2,4); //2�� 4��
	double c = sin(0.5*M_PI); //M_PI�� �������̴�!



	//getline(cin, )
	//cin��space " "�������� �޾ƿ� �� ������
	//getline�� space" "�� ������ �� ���� line�� �޾ƿ� ���ְ�, enter���� �ްԵȴ�.
	string input;
	cout<<"cin: ";
	cin>>input;
	cout<<input<<endl;

	cout<<"getline: ";
	getline(cin,input);
	cout<<input<<endl;


	//fstream
	string out_line;
	ofstream out("test.txt");//test.txt�� ���� out�� �������� ofstream���� out�� �����ϰ�, out�� test.txt�� ���� ������ ��´�.
	for(int i=0;i<=10;i++)
	{
		getline(cin,out_line); //user�� input�� �޴´�.
		out<<out_line<<endl; //test.txt������ ������ �ִ� out���� user�� ��ǲ�� ������. -> test.txt�� ���� ����.
	}
	out.close();//file�� �ݴ´�.

	string in_line;
	ifstream in("test.txt");//test.txt�� ���� �ڵ������� �������� ���� ifstream���� in�� �����ϰ�, in�� test.txt�� ������ ��´�.
	while(getline(in,in_line))//in�� test.txt���� �� line�� �����ͼ� in_line�� �ִ´�. ������ line�� �Ǿ� in�� null�� �Ǹ�  getline()�� 0�̵Ǿ� ������ ������.
	{ 
		cout<<in_line<<endl; //in_line�� ���� line���� console out���� �����ش�.
	}
	in.close();//file�� �ݴ´�.

}

