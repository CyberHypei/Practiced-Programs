#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int n,sum =0 ,number;
cout<<"enter the number";
cin>>n;
cout<<"\n enter the number";
while(n>0)
{
    cin>>number;
    sum = sum+number;
    n--;
}
cout<<"\n sum is"<<sum;
return 0;
}

