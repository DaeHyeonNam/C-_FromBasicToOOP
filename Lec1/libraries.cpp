#include <iostream>
#include <vector>
#include <cmath>
#include <fstream>

using namespace std;

int main()
{
	//vector
	vector<int> vec; //vec이라는 int를 담을 수 있는 vector 생성(Array처럼 변수를 담을 수 있는 container).
	vec.push_back(10); //push_back을 통해 값을 vec의 맨 뒤에  넣을 수 있고,
	vec.pop_back(); //pop_back을 통해 맨 뒤의 값을 없앨 수 있다.
	vec[0]=10;
	cout<<vec[0]<<endl; //이렇게 인덱스로 접근이 가능하다!


	//cmath
	//수학 함수들을 위한 library
	int a = sqrt(16); //16의 루트
	int b = pow(2,4); //2의 4승
	double c = sin(0.5*M_PI); //M_PI는 ㅠ파이이다!



	//getline(cin, )
	//cin은space " "전까지만 받아올 수 있지만
	//getline은 space" "를 포함한 한 줄의 line을 받아올 수있고, enter까지 받게된다.
	string input;
	cout<<"cin: ";
	cin>>input;
	cout<<input<<endl;

	cout<<"getline: ";
	getline(cin,input);
	cout<<input<<endl;


	//fstream
	string out_line;
	ofstream out("test.txt");//test.txt에 글을 out즉 적기위해 ofstream으로 out를 지정하고, out에 test.txt에 대한 정보를 담는다.
	for(int i=0;i<=10;i++)
	{
		getline(cin,out_line); //user의 input을 받는다.
		out<<out_line<<endl; //test.txt정보를 가지고 있는 out에게 user의 인풋을 보낸다. -> test.txt에 글이 적힘.
	}
	out.close();//file을 닫는다.

	string in_line;
	ifstream in("test.txt");//test.txt의 글을 코드쪽으로 가져오기 위해 ifstream으로 in을 지정하고, in에 test.txt에 정보를 담는다.
	while(getline(in,in_line))//in이 test.txt에서 한 line씩 가져와서 in_line에 넣는다. 마지막 line이 되어 in이 null이 되면  getline()이 0이되어 루프가 끝난다.
	{ 
		cout<<in_line<<endl; //in_line에 들어온 line들을 console out으로 보여준다.
	}
	in.close();//file을 닫는다.

}

