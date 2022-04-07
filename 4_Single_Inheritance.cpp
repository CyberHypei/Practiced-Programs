//Single Level Inheritance
#include<iostream>
using namespace std;
class a
{
	int x;
	public:
		a()
		{
			x=0;
		}
		a(int x1)
		{
			x=x1;
		}
		void setdata(int x1)
		{
			x=x1;
		}
		void getdata()
		{
			cout<<"Enter a number";
			cin>>x;
		}
		void display()
		{
			cout<<x<<endl;
		}
};
class b:public a
{
	int y;
	public:
		b():a() //it is optional to call a()
		{
			y=0;
		}
		b(int x1,int y1):a(x1)	//It is compulsory
		{
			y=y1;
		}
		void setdata(int x1,int y1)
		{
			a::setdata(x1);
			/*setdata(x1) will not work in c++ it is
			not function overloading.In c++ it first 
			search the name of function first in
			derived class and if it is found then it
			will stop searching and try to call the
			function that is found in derived class
			but if it does not found in derived class
			then it will search in base class*/
			y=y1; 
		}
		void getdata()//function overriding
		{
			a::getdata();
			cout<<"Enter a number";
			cin>>y;
		}
		void display()
		{
			a::display();
			cout<<y<<endl;
		}
};
int main()
{
	b b1;
	b1.getdata();
	b1.display();
	b b2;
	b2.setdata(5,10);
	b2.display();
	b b3(5,7);
	b3.display();
}
/*function overring:-
when two functions having same name and same argument 
one is defined in base class and another is defined in
derived class then priority will given to derived class
function,it means derived class function will override
base class function and this is called as function 
overriding.now to call base class function in this case
we have to prefix class name and scope resolution operator
before function call.

rule 1:constructor calling order is from base to derived.
rule 2:by default all the constructor of derived class
will call zero argument contructor of base class automatically
if not called by explicitely.
rule 3:destructor calling order is from derived to base.*/
