#include<iostream>
#include<math.h>
using namespace std;
int fact(int);
int main()
{
int n,ans;
cout<<"enter the number";
cin>>n;
ans=fact(n);
cout<<ans;
}
int fact (int n)
{
if(n == 0)
            return   1;
            return n*fact(n-1);
            }
