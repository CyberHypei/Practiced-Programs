#include<iostream>
using namespace std;
int main()
{
int y;
cout<<"enter the year";
cin>>y;
if(y%100==0)
    {
        if(y%400 == 0)
                    cout<<"year is leap";
        else
                    cout<<"year is not leap";
    }
else
        {
        if(y%4 == 0)
                    cout<<"year is leap";
        else
                    cout<<"year is not leap";
        }
}
