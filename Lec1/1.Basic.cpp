#include <iostream> //iostream �̶�� library�� ������. (iostream�� console�� Input,Output �� stream ���帧�� ����Ѵٴ� ��) 

using namespace std; //std��� namespace�� �ִ� cin, cout, endl ���� std::cin, std::cout, std::endl�� ���� std::���� ����� �� �ֵ��� �̸� std�� ����ϰڴٰ� ������.

int main()//�� �־���ϴ� main�Լ�. cpp������ �����ϸ� main�Լ��� ������ �ʾƵ�, �ڵ����� �� �Լ��� �����. �ٸ� �Լ����� call�� �Ǿ�߸� ����!
{	
	char     charecter = 'A';
//	����Ÿ��  �����̸�  �ʱ�ȭ
	
	int integer1 =100;//initialization ��� 1
	
	int integer2;
	integer2 =100; //initialization ��� 2

	//����Ÿ���� ����
	//���� ����: short, int, long, bool
	//���� �Ҽ���: float, double, long double
	//����: char, string

	//Array
	int arr[10]; //int�� 10�� ���� �ִ� array����.
	int arr_init[10] ={0,0,0,0,0,0,0,0,0,0} //�ʱ�ȭ ���.
	arr[5] = 4;  //arr[i] �� ������� Ư�� index�� ���� ����, ��°���.
	cout<< arr[5]<<endl;



	cout<< "Hello World"<<endl; //console out(cout) end line(endl) -> �ַܼ� Hello World�� �پ�⸦ �������ڴ�.
	string input;
	cin>>input; //console in(cin) -> �ַܼ� ��ǲ�� �޾� input�̶�� ������ �ְڴ�.
	
	int integer =10;
	//if ��
	if(integer == 10) //��ȣ!
	{
		cout<<"integer is 10"<<endl;
	}
	//&& : and
	//|| : or
	//! : not
	if(!(integer != 10))//not �ΰ�!-> �Ȱ���
	{
		cout<<"integer is 10"<<endl;
	}

	//for ��
	for(int i=0; i<10; i++)//(���� �ʱ�ȭ; ���ǹ�; ���� update) ���� update�� loop�� �������� �Ͼ.
	{
		cout<<i<<endl;
	}

	//while ��
	int j=0; //���� �ʱ�ȭ
	while(j<10) //���ǹ�
	{
		cout<<j<<endl;
		j++; //���� update
	}

	int k=0;
	while(1)//while���� ���ѷ����� ������,
	{
		if(k==10)//�ȿ��� ���ǹ��� ���� break�ϴ� ��쵵 ����.
		{
			break; //break�ϸ� ��������(���⼱ while ����)�� �����Ե�.
		}
		cout<<k<<endl;
		k++;
	}

	//do while��
	int y=0;
	do
	{
		cout<<"Enter y: ";//���� ���α׷� ����ڿ��� �ѹ� ������� �ʿ��ϴٴ� �� �����ְ�,
		cin>>y;
		if(y==1) //input���� ������ ���� Ż��, Ʋ���� ��� �ٽ� �Է��ϰ� �Ҷ� ����.
		{
			break;
		}
	}while(1);

}

