#include<iostream>
using namespace std;
int main()
{
    int a,b,c,t;
    cout<<"enter the 3 number";
    cin>>a>>b>>c;
    cout<<"before swap value are"<<a<<","<<b<<","<<c<<endl;
    a = a+b+c;
    c = a-b-c;
    b = a-b-c;
    a = a-b-c;
    cout<<"after swap value"<<a<<","<<b<<","<<c<<endl;
    return 0;
}
