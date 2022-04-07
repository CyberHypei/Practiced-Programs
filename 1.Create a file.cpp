//Create a file and write something
#include<fstream>
using namespace std;
int main()
{
	ofstream fout;
	fout.open("E:/Study/C++ Coaching/File Handling/Data/a.txt");
	fout<<"Hello Lalit";
	fout.close();
	return 0;
}
