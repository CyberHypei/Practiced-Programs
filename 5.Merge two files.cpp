//Merge two files
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream fin1("E:/Study/C++ Coaching/File Handling/Data/a.txt");
	ifstream fin2("E:/Study/C++ Coaching/File Handling/Data/b.txt");
	ofstream fout("E:/Study/C++ Coaching/File Handling/Data/c.txt");
	if(!fin1||!fin2||!fout)
	{
		cerr<<"File not open";
		exit(1);
	}
	char ch1[20];
	char ch2[20];
	while(1)
	{
		fin1.getline(ch1,20);
		fin2.getline(ch2,20);
		if(fin1.eof()||fin2.eof())
			break;
		fout<<ch1<<endl<<ch2;	
	}
	fin1.close();
	fin2.close();
	fout.close();
	return 0;
}
