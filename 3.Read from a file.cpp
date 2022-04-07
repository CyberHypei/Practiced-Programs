//Read from a file
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream fin;
	fin.open("E:/Study/C++ Coaching/File Handling/Data/a.txt");
	if(!fin)
	{
		cerr<<"File not open";
		exit(1);
	}
	char ch;
	while(1)
	{
		fin.get(ch);
		if(fin.eof())
			break;
		cout<<ch;	
	}
	fin.close();
	return 0;
}
