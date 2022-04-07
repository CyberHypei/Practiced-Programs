#include<iostream>
using namespace std;
struct student{
	int age;
};
void setage(student &s1,int a){
	if(a>0)
		s1.age=a;
	else
		s1.age=25;
}
int main(){
	student s1;
	setage(s1,-20);

	//s1.age=-20
	cout<<s1.age;
	return 0;
}
