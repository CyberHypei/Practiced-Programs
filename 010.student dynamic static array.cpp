#include<iostream>
#include<conio.h>
#include<string.h>
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
  }
  float per()
  {
  int t = total();
  return (float)t/2;
  }
  public:
  void getdata()
  {
  cout<<"enter the roll number :";
  cin>>roll;
  cout<<"enter the name :";
  cin.ignore();
  cin.getline(name,20);
  cout<<"enter the 2 sunject number :";
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
 student *s;
 int n,i;
 cout<<"enter the number";
 cin>>n;
 s= new student[n];
//user input
 for(i=0;i<n;i++)
 s[i].getdata();
 cout<<"real \t name \t sbj1 \t sbj2 \t per";
//texting
 //for(i=0;i<n;i++)
 //s[i].setdata(101,"amit",97,25);

 for(i=0;i<n;i++)
 s[i].display();
 delete [] s;
 s = NULL;
 return 0;
 }
