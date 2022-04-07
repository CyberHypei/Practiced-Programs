#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a,b,c,d,i,j,k,l;
    int ****m;
    cout<<"enter the number";
    cin>>a>>b>>c>>d;
    m = new int***[a];
    for(i=0;    i<a;    i++)
    {
        m[i] = new int**[b];
        for(j=0;    j<b;    j++)
        {
            m[i][j] = new int*[c];
            for(k=0;    k<c;    k++)
            {
                m[i][j][k] = new int[d];
            }
        }
    }
    //input
    for(i=0;    i<a;    i++)
    {
        for(j=0;    j<b;    j++)
        {
            for(k=0;    k<c;    k++)
            {
                for(l=0;    l<d;    l++)
                {
                    cout<<"enter the number"<<i+1<<"."<<j+1<<"."<<k+1<<"."<<l+1<<":";
                    cin>>m[i][j][k][l];
                }
                cout<<endl;
            }
            cout<<endl;
        }
        cout<<endl;
    }
//output
    for(i=0;    i<a;    i++)
    {
        for(j=0;    j<b;    j++)
        {
            for(k=0;    k<c;    k++)
            {
                for(l=0;    l<d;    l++)
                {
                    cout<<m[i][j][k][l]<<"\t";
                }
                cout<<endl;
            }
        cout<<endl;
        }
        cout<<endl;
    }
    for(i=0;    i<a;    i++)
        {
            for(j=0;    j<b;    j++)
            {
                for(k=0;    k<c;    k++)
                {
                    for(l=0;    l<d;    l++)
                    {
                        delete []m[i][j][k];
                    }
                    delete []m[i][j];
                }
                delete []m[i];
            }
            delete []m;
        }
        return 0;
}

