#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<vector<int> > vec_in_vec;	
	
	for(int i=0; i<10; i++)
	{
		vector<int> temp;
		for (int j=0; j<=i; j++)
		{
			temp.push_back(j);
		}
		vec_in_vec.push_back(temp);
	}
	
}
