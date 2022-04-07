#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
class student
{
private:
    int roll;
    char name[20];
    int sub1;
    int sub2;
    int total()
    {
        return (sub1+sub2);
    };
    float per()
    {
        int t = total();
        return (float)t/2;
    };
public:
    void getdata()
    {
        cout<<"enter the roll number \t";
        cin>>roll;
        cout<<"enter the name \t";
        cin.ignore();
        cin.getline(name,20);
        cout<<"enter the 2 sub. number \t";
        cin>>sub1>>sub2;
    }
    void setdata(int r,const char *n,int a,int b)
    {
        roll = r;
        strcpy(name,n);
        sub1 = a;
        sub2 = b;
    }
    void display()
    {
        cout<<endl<<roll<<"\t"<<name<<"\t"<<sub1<<"\t"<<sub2<<"\t"<<per()<<"%"<<endl;
    }
};
int main()
{
student s1,s2;
//s1.getdata();
//s2.getdata();
s1.setdata(101,"amit",78,89);
s2.setdata(102,"manish",89,25);
cout<<"roll\tname\tsub1\tsub2\tper";
s1.display();
s2.display();
}
