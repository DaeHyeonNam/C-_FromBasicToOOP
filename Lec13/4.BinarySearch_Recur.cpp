#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

void Create_Random_Array(int v[]);
void quick_sort(int *data, int start, int end);

int bSearch(int a[], int lo, int hi, int X)
{
	
}

int main()
{
	int arr[20];
	Create_Random_Array(arr);
	for(int i=0; i<20; i++)
	{
		cout<<arr[i];
		cout<<" ";
	}
	cout<<endl<<endl;
	
	quick_sort(arr, 0, 19);
	for(int i=0; i<20; i++)
	{
		cout<<arr[i];
		cout<<" ";
	}
	cout<<endl;
}





void Create_Random_Array(int v[])
{
	srand((unsigned)time(0));
	for(int i=0; i<20; i++)
	{
		v[i] = rand()%20;
	}
}

void quick_sort(int *data, int start, int end)
{
    if(start >= end){
        return; 
    }
    
    int pivot = start;
    int i = pivot + 1; 
    int j = end; 
    int temp;
    
    while(i <= j){
        while(i <= end && data[i] <= data[pivot])
		{
            i++;
        }
        while(j > start && data[j] >= data[pivot])
		{
            j--;
        }
        
        if(i > j)
		{
            temp = data[j];
            data[j] = data[pivot];
            data[pivot] = temp;
        }
		else
		{
            temp = data[i];
            data[i] = data[j];
            data[j] = temp;
        }
    } 
    
    quick_sort(data, start, j - 1);
    quick_sort(data, j + 1, end);
}

