#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int **m,r,c,i,j;
cout<<"enter the number";
cin>>r>>c;
m = (int **)malloc(r*sizeof(int*));
for(i=0; i<r;i++)
{
m[i] = (int *)malloc(c*sizeof(int ));
}
if(m == NULL)
{
     cout<<"memory full";
     exit(1);
}
for(i=0;i<r;i++)
{
    if(m[i] == NULL)
    {
         cout<<"memory full";
         exit(1);
     }
 }
 for(i=0; i<r;i++)
 {
 for(j=0;j<c;j++)
 {
 cout<<"enter the number"<<i+1<<"."<<j+1<<":";
 cin>>m[i][j];
 }
 }
 for(i = 0;i<c;i++)
 {
 for(j=0;j<r;j++)
 {
 cout<<m[j][i]<<"\t";
 }
 cout<<endl;
 }
 for(i=0;i<r;i++)
 {
 free(m[i]);
 free(m);
 m = NULL;
 }
 return 0;
}

