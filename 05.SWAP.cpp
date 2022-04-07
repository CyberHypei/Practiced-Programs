#include<iostream>
#include<math.h>
using namespace std;
class Swap
{
private:

int x;
int y;

public:
    void getdata()
    {
        cout<<"enter the 2 number";
        cin>>x>>y;
    }
void setdata(int x1,int y1)
{
x = x1;

y = y1;
}
void swap()
{
int t = x;
x = y;
y = t;
}
void display(const char * msg)
{
cout<<msg <<x<<"\n"<<y;
}
} ;
int main()
{
Swap s1;
//user input
s1.getdata();
//or testing purpose
//s1.setdata(10,5);
s1.swap();
s1.display("x,y is");

return 0;
}
