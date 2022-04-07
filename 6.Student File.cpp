//Student data save in a file
#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<fstream>
using namespace std;
class student
{
	int roll;
	char name[20];
	public:
		student()
		{
			roll=0;
			strcpy(name,"");
		}
		void getdata()
		{
			cout<<"\nEnter the roll no:";
			cin>>roll;
			cout<<"\nEnter the name of the student:";
			cin.ignore();
			cin.getline(name,20);
		}
		void writedisk()
		{
			ofstream fout("E:/Study/C++ Coaching/File Handling/Data/Student.txt",ios::app);
			if(!fout)
			{
				cerr<<"File Opening error";
				exit(1);
			}
			fout<<roll<<"\t"<<name<<endl;
			fout.close();
		}
		void read()
		{
			ifstream fin("E:/Study/C++ Coaching/File Handling/Data/Student.txt");
			if(!fin)
			{
				cerr<<"File Opening error";
				exit(1);
			}
			while(1)
			{
				fin>>roll>>name;
				if(fin.eof())
					break;
				cout<<roll<<"\t"<<name<<endl;	
			}
			fin.close();
		}
};
int main()
{
	student s1;
	int n,i;
	cout<<"\nEnter how many students";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		s1.getdata();
		s1.writedisk();
	}
	s1.read();
	return 0;
}
