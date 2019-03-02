#include <iostream>

using namespace std;

char index(string a, int b)
{
	return a[b];
}

/*
template <class T1, class T2>
char index(T1 a, T2 b)
{
	return a[b];
}
*/

int main()
{
	string str ="hello";
	int b=4;
	cout<<index(str,b)<<endl;
}
