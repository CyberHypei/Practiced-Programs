#include<iostream>
#include<math.h>
using namespace std;
int sum(int , int );
int main()
{
int a,b,ans;
cout<<"enter the number";
cin>>a>>b;
ans=sum(a,b);
cout<<ans;
return  0;
}
int sum(int a,int b)
{
    return(a+b);
}


/*{
if(i>p)
 return;
 col(1,i);
 cout<<;
 sum(i+1,n);
}
void col(int j,int i)
{
if(j>i)
return ;
cout<<j;
col(j+1,i);
}*/
