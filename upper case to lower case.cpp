#include<iostream>
#include<math.h>
using namespace std;
char toupr(char);
int main()
{
char ch;
cout<<"enter the lower character";
cin>>ch;
ch = toupr(ch);
cout<<ch;
return 0;
}
char toupr(char ch)
{
if(ch>=64 && ch<=91)
ch = ch+32;
return ch;
}
