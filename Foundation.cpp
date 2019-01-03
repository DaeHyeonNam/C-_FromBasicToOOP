#include <iostream> //iostream 이라는 library를 가져옴. (iostream은 console의 Input,Output 의 stream 즉흐름을 담당한다는 말) 

using namespace std; //std라는 namespace에 있는 cin, cout, endl 등을 std::cin, std::cout, std::endl과 같이 std::없이 사용할 수 있도록 미리 std를 사용하겠다고 선언함.

int main()//꼭 있어야하는 main함수. cpp파일을 실행하면 main함수를 콜하지 않아도, 자동으로 이 함수가 실행됨. 다른 함수들은 call이 되어야만 실행!
{	
	char     charecter = 'A';
//	변수타입  변수이름  초기화
	
	int integer1 =100;//initialization 방법 1
	
	int integer2;
	integer2 =100; //initialization 방법 2

	//변수타입의 종류
	//숫자 정수: short, int, long, bool
	//숫자 소수점: float, double, long double
	//글자: char, string

	//Array
	int arr[10]; //int가 10개 담길수 있는 array생성.
	int arr_init[10] ={0,0,0,0,0,0,0,0,0,0} //초기화 방법.
	arr[5] = 4;  //arr[i] 이 방법으로 특정 index의 값을 수정, 출력가능.
	cout<< arr[5]<<endl;



	cout<< "Hello World"<<endl; //console out(cout) end line(endl) -> 콘솔로 Hello World와 뛰어쓰기를 내보내겠다.
	string input;
	cin>>input; //console in(cin) -> 콘솔로 인풋을 받아 input이라는 변수에 넣겠다.
	
	int integer =10;
	//if 문
	if(integer == 10) //괄호!
	{
		cout<<"integer is 10"<<endl;
	}
	//&& : and
	//|| : or
	//! : not
	if(!(integer != 10))//not 두개!-> 똑같음
	{
		cout<<"integer is 10"<<endl;
	}

	//for 문
	for(int i=0; i<10; i++)//(변수 초기화; 조건문; 변수 update) 변수 update는 loop맨 마지막에 일어남.
	{
		cout<<i<<endl;
	}

	//while 문
	int j=0; //변수 초기화
	while(j<10) //조건문
	{
		cout<<j<<endl;
		j++; //변수 update
	}

	int k=0;
	while(1)//while문은 무한루프를 돌리고,
	{
		if(k==10)//안에서 조건문을 통해 break하는 경우도 많음.
		{
			break; //break하면 상위루프(여기선 while 루프)가 끝나게됨.
		}
		cout<<k<<endl;
		k++;
	}

	//do while문
	int y=0;
	do
	{
		cout<<"Enter y: ";//먼저 프로그램 사용자에게 한번 어떤내용이 필요하다는 걸 말해주고,
		cin>>y;
		if(y==1) //input값이 맞으면 루프 탈출, 틀리면 계속 다시 입력하게 할때 사용됨.
		{
			break;
		}
	}while(1);

}
