#include <iostream>

using namespace std;

class studentInfo
{
	private:
		friend class student;
		
		int age;
		string name;
		double GPA;
	public:
		studentInfo(int age, string name, double GPA)
		{
			this->age =age;
			this->name =name;
			this->GPA = GPA;
			
			cout<<"studentInfo created"<<endl;
		}
		
		~studentInfo()
		{
			cout<<"studentInfo destroyed"<<endl;
		}
};

class student
{
	private:
		studentInfo info;
	public:
		student(int age, string name, double GPA):info(age,name,GPA)
		{
			cout<< "student created"<<endl;
		}
		
		~student()
		{
			cout<<"student destroyed"<<endl;
		}
};
int main()
{
	student A1(19, "Daehyeon", 4.3);

}
