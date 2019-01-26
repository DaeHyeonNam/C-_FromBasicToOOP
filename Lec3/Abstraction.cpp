#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int swap(int&, int&);

int main()
{
	vector <int> myvector;
	sort(myvector.begin(), myvector.end()); 
	
	return 0;
}

int swap(int& a,int& b)
{
	int temp= a;
	a=b;
	b=temp;
}
