//overloading of insertion and extraction operator
#include<iostream>
using namespace std;
class complex
{
	int real,imag;
	public:
		complex()
		{
			real=imag=0;
		}
		complex(int r,int i)
		{
			real=r;
			imag=i;
		}
		complex operator+(complex c)
		{
			complex t;
			t.real=real+c.real;
			t.imag=imag+c.imag;
			return t;
		}
		friend ostream& operator<<(ostream&,complex&);
		friend istream& operator>>(istream&,complex&); 
};
ostream &operator<<(ostream &out,complex &c)
{
	if(c.imag>=0)
		out<<c.real<<"+"<<c.imag<<endl;
	else
		out<<c.real<<c.imag<<endl;	
	return out;
}
istream &operator>>(istream &in,complex &c)
{
	cout<<"Enter real";
	in>>c.real;
	cout<<"Enter imag";
	in>>c.imag;
	return in;
}
int main()
{
	complex c1,c2,c3;
	cout<<"Enter two complex number";
	cin>>c1>>c2;
	c3=c1+c2;
	cout<<"sum="<<c3;
}
