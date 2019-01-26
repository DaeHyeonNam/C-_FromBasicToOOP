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

class Queue
{
	private:
		Node* Head;
		int length;
	public:
		Queue()
		{
			this->Head = NULL;
			this->length = 0;
		}
		
		void push(int);
		
		int pop();
		
		~Queue()
		{
			cout<<"Queue Finished"<<endl;
		}
};

int main()
{
	Queue Qu;
	Qu.push(3);
	Qu.push(4);
	
	cout<<Qu.pop()<<endl;
	cout<<Qu.pop()<<endl;
	//cout<<st.pop()<<endl;
}




void Queue::push(int value)
{
	if(length == 0)
	{
		this->Head = new Node(value);
		Head->Next = NULL;
	}
	else
	{
		Node* temp = Head;
		Head =new Node(value);
		Head->Next= temp;
	}
			
	this->length++;
}

int Queue::pop()
{
	if(length ==0)
	{
		cout<<"Queue is Empty"<<endl;
		return 0;
	}
	
	//temp for pointing last Node
	Node* temp= Head;
	for(int i=0; i<this->length-1; i++)
	{
		temp= temp->Next;
	}
	int re_value = temp->value;
	
	//temp2 for pointing Second Last Node
	Node* temp2= Head;
	for(int i=0; i<this->length-2; i++)
	{
		temp2=temp2->Next;
	}
	temp2->Next= NULL;

	//decrease the length
	this->length--;
	
	delete temp;
		
	return re_value;
}
