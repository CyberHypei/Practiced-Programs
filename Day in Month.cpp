#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int n;
	cout<<"Enter month number between 1 to 12";
	cin>>n;
	switch(n)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			cout<<"31 Days";
			break;
		case 2:
			cout<<"28 Or 29 Days";
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			cout<<"30 Days";
			break;
		default:
			cout<<"Invalid Input";	
	}
	getch();
	return 0;
}

