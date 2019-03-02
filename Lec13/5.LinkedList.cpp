#include <iostream>

using namespace std;

struct Node
{
	Node* Next;
	int value;
	
	Node(int value)
	{
		this->value = value;
	}
};

class LinkedList
{
	private:
		Node* Head;
		int length;
	public:
		LinkedList()
		{
			this->Head = NULL;
			this->length = 0;
		}
		
		void push(int);
		
		int pop();
		
		~LinkedList()
		{
			cout<<"LinkedList Finished"<<endl;
		}
};
