//Copy a.txt to b.txt
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream fin("E:/Study/C++ Coaching/File Handling/Data/a.txt");
	ofstream fout("E:/Study/C++ Coaching/File Handling/Data/b.txt");
	if(!fin||!fout)
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
		fout.put(ch);	
	}
	fin.close();
	fout.close();
	return 0;
}
