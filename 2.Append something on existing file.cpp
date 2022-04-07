//Append something on existing file
#include<fstream>
using namespace std;
int main()
{
	ofstream fout;
	fout.open("E:/Study/C++ Coaching/File Handling/Data/a.txt",ios::app);
	fout<<"\nHow Are You?";
	fout.close();
	return 0;
}
