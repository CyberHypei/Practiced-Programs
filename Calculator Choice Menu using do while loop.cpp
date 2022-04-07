//Calculator
#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
main()
{
	int ch,a,b;
	do
	{
		cout<<"\n1. Add"<<endl
			<<"2. Sub"<<endl
			<<"3. Multiply"<<endl
			<<"4. Division"<<endl
			<<"5. Mod"<<endl
			<<"6. Pow"<<endl
			<<"7. SQRT"<<endl
			<<"0. Exit"<<endl;
		cout<<"Enter your choice : ";
		cin>>ch;
		switch(ch)
		{
			case 0:
				break;
			case 1:
				cout<<"Enter any two numbers ";
				cin>>a>>b;
				cout<<"Sum is "<<a+b;
				break;
			case 2:
				cout<<"Enter any two numbers ";
				cin>>a>>b;
				cout<<"Difference is "<<a-b;
				break;
			case 3:
				cout<<"Enter any two numbers ";
				cin>>a>>b;
				cout<<"Product is "<<a*b;
				break;
			case 4:
				cout<<"Enter any two numbers ";
				cin>>a>>b;
				if(b!=0)
					cout<<"Division is "<<a/b;
				else
					cout<<"Error!Div by zero.";
				break;
			case 5:
				cout<<"Enter any two numbers ";
				cin>>a>>b;
				if(b!=0)
					cout<<"Remainder is "<<a%b;
				else
					cout<<"Error!Div by zero.";
				break;
			case 6:
				cout<<"Enter a number and its power ";
				cin>>a>>b;
				cout<<"Result is "<<pow(a,b);
				break;
			case 7:
				cout<<"Enter any number ";
				cin>>a;
				cout<<"Sqrt is "<<sqrt(a);
				break;
			default:
				cout<<"Invalid choice";
		}
	}
	while(ch!=0);
	getch();
	return 0;
}

