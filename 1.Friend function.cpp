/*
Friend function:friend is a keyword in c++.If a class 
declare a non member function as a friend then that
function can even access the private data of that class.
According to some critics this is against the principle 
of oops but actually it is not true a class itself 
declares the function as a friend.
Friend can be function or friend can be class.
A function can be a memeber of only one class but it can
be a friend of multiple class a member function access
data of its class directly but a friend function can access 
data of its friends class through object.*/
#include<iostream>
using namespace std;
class b;
class a
{
	private:
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
			friend int sum(a,b);
};
class b
{
	private:
		int y;
	public:
		b()
		{
			y=0;
		}
		b(int y1)
		{
			y=y1;
		}
		friend int sum(a,b);
};
int sum(a a1,b b1)
{
	int c;
	c=a1.x+b1.y;
	return c;
}
int main()
{
	a a1(5);
	b b1(4);
	cout<<sum(a1,b1);
}
