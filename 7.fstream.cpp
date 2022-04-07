#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
int main()
{
	fstream file("E:/Study/C++ Coaching/File Handling/Data/a.txt");
	if(!file)
	{
		cerr<"File opening error";
		exit(1);
	}
	file<<"matrix";
	cout<<"position of get pointer is"<<file.tellg()<<endl;
	cout<<"position of put pointer is"<<file.tellp()<<endl;
	file.seekg(2,ios::beg);
	char ch;
	ch=file.get();
	cout<<"character is"<<ch<<endl;
	cout<<"position of get pointer is"<<file.tellg()<<endl;
	file.seekg(-1,ios::cur);
	ch=file.get();
	cout<<"character is"<<ch<<endl;
	cout<<"position of get pointer is"<<file.tellg()<<endl;
	file.seekg(-1,ios::end);
	ch=file.get();
	cout<<"character is"<<ch<<endl;
	cout<<"position of get pointer is"<<file.tellg()<<endl;
	cout<<"position of put pointer is"<<file.tellp()<<endl;
	file.seekp(0,ios::beg);
	file.put('P');
	cout<<"position of get pointer is"<<file.tellg()<<endl;
	file.close();
}
