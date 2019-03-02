#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> vec;
	for (int i=0; i<10; i++)
		vec.push_back(i);
	
	vector<int>::iterator iter1 = vec.begin();
	vector<int>::iterator iter2 = vec.end();

	random_shuffle(iter1, iter2);
	
	for(vector<int>::iterator iter= vec.begin(); iter!= vec.end(); iter++)
	{
		cout<<*iter<<endl;	
	}
	cout<<"random shuffle is done"<<endl;
	cout<<endl;
	
	sort(iter1, iter2);
	
	for(vector<int>::iterator iter= vec.begin(); iter!= vec.end(); iter++)
	{
		cout<<*iter<<endl;	
	}
	cout<<"sorting is done"<<endl;
	cout<<endl;

}
