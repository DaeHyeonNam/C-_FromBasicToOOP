#include <iostream>

using namespace std;
 
struct student
{
	int studentID;
};

int main()
{
	student* daehyeon = new student;
	(*daehyeon).studentID = 20161080;
	
	daehyeon->studentID = 20161080;	
}
