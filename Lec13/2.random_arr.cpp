#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main()
{
	int v[20];
	srand((unsigned)time(0));
	for(int i=0; i<20; i++)
	{
		v[i] = rand()%20;
	}
	for(int i=0; i<20; i++)
	{
		cout<<v[i]<<endl;
	}
	
}
