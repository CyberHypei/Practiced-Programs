#include<iostream>
#include<math.h>
using namespace std;
class Array
{
private:
    int arr[20];
    int n;

public:
    void getdata()
       {
        cout<<"enter the how many number";
        cin>>n;
        for(int i=0;    i<n;    i++)
            {
                cout<<"enter the number"<<i+1;
                cin>>arr[i];
            }
       }
    void sort()
       {
           for(int i=0;    i<n-1;  i++)
            for(int j=i+1;  j<n;    j++)
                if(arr[i]>arr[j])
                {
                    int t = arr[i];
                    arr[i] = arr[j];
                    arr[j] = t;
                }
    }
    void reverse()
        {
            for(int i=0,j=n-1;    i<j;    i++,j--)
        {
            int t = arr[i];
            arr[i] = arr[j];
            arr[j] = t;
        }
        }
    void display()
        {
        cout<<"array is"<<endl;
        for(int i=0;    i<n;    i++)
            cout<<arr[i]<<"\t";
        }
};
int main()
{
    Array a1;
    a1.getdata();
    a1.sort();
    a1.display();
    a1.reverse();
    a1.display();
return 0;
}
