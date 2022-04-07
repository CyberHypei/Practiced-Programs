#include<iostream>
using namespace std;
int x=1;			//global
class A{
		int x;		//member
	public:
		void f1(){
			x=5;
			int x;	//local
			x=10;
			cout<<x<<endl;			//10
			cout<<this->x<<endl;	//5
			cout<<::x<<endl;		//1
		}
};
int main(){
	A a1;
	a1.f1();
	return 0;
}
