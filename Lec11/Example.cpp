#include<iostream>
#include<cmath>

using namespace std;

class figure //parent abstract class
{
public:
	virtual double getArea()=0;
};

class square: public figure //child class
{
private:
	double EdgeLength;
private:
	//make a constructor that get length as a parameter
	
	//make a function named "getArea" that returns the Area of square.
};
class triangle: public figure
{
private:
	double EdgeLength;
public:
	//make a constructor that get length as a parameter
	
	//make a function named "getArea" that returns the Area of triangle
};


double GetArea(/*fill it*/)
{
	//write your code
}
int main()
{
	triangle A(4);
	square B(4);
	
	cout<<GetArea(&A)<<endl; //output: 
	cout<<GetArea(&B)<<endl;
}
