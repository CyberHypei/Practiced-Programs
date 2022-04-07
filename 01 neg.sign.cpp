 #include<iostream>
 using namespace std;
 class A
{
        int x;
    public:
    A()
    {
        x = 0;
    }
    A(int x1)
    {
        this->x = x1;
    }
 /*int sign()
 {
 return -x;
 }*/
    int operator -()
    {
        return -x;
    }
    void display()
    {
        cout<<x<<endl;
    }
 };
 int main()
 {
 A a1(5);
 //cout<<a1.sign()<<endl
 cout<<-a1<<endl;
 a1.display();
 return 0;
 }
