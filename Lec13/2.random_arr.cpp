#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main()
{
	int v[100];
	srand((unsigned)time(0));
	for(int i=0; i<100; i++)
	{
		v[i] = rand()%50;
	}
	for(int i=0; i<100; i++)
	{
		cout<<v[i]<<endl;
	}
	
}
