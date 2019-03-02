#include <iostream>

using namespace std;

class person //paerent class
{
protected:
	string name;
	int height;
	int weight;
public:
	person(string name, int height = 160, int weight = 60)	
	{
		this->name = name;
		this->height= height;
		this->weight = weight;
	}
	string getName()
	{
		return name;
	}
};

class student : public person //child class
{
private:
	int studentID;
	string Nickname;
	
public:
	student(int studentID, string Nickname,string name, int height = 160, int weight = 60): person(name, height, weight)
	{
		this->studentID = studentID;
		this->Nickname = Nickname;
	}
	string getName()
	{
		return Nickname;
	}
};

class teacher : public person //child class
{
private:
	int teacherID;
	string Nickname;
	
public:
	teacher(int teacherID, string Nickname,string name, int height = 160, int weight = 60): person(name, height, weight)
	{
		this->teacherID = teacherID;
		this->Nickname = Nickname;
	}
	string getName()
	{
		return Nickname;
	}
};


int main()
{
	teacher A(5134, "snake", "John");
	student B(20161080, "Dog", "Thomas");
	
	cout<<"Teacher Nickname: "<<A.getName()<<endl;
	cout<<"Student Nickname: "<<B.getName()<<endl;
	
	cout<<"Teacher name: "<<A.person::getName()<<endl;
	cout<<"Student name: "<<B.person::getName()<<endl;
}
