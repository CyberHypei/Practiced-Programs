/*Inheritance is a process by which features and 
properties of one class in transferred into another 
class without changing the base class and add new
feautures in derived class.this is also called as code
reusability.It helps in reducing the size of our program
and saving of time also*/
#include<iostream>
using namespace std;
class a
{
	public:
	int x;	
}; 
class b:public a
{
	public:
		int y;
};
int main()
{
	b b1;
	b1.x=5;
	b1.y=9;
	cout<<b1.x<<"\t"<<b1.y<<endl;
}
