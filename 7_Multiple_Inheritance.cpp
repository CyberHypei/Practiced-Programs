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
class b
{
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
		void getdata()
		{
			cout<<"Enter the number";
			cin>>y;
		}
		void display()
		{
			cout<<y<<endl;
		}
};
class c:public a,public b //this order will decide contructor calling
{
	int z;
	public:
		c():a(),b()
		{
			z=0;
		}
		c(int x1,int y1,int z1):a(x1),b(y1)
		{
			z=z1;
		}
		void getdata()
		{
			a::getdata();
			b::getdata();
			cout<<"Enter a number";
			cin>>z;
		}
		void display()
		{
			a::display();
			b::display();
			cout<<z<<endl;
		}
};
int main()
{
	c c1;
	c1.getdata();
	c1.display();
	c c2(5,6,7);
	c2.display();
}
