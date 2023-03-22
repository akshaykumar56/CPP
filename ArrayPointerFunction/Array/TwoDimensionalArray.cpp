#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int d[2][3];
    int i,j;
    for (i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
        {
            cout<<"enter array element d["<<i<<"]["<<j<<"] :" ;
            cin>>d[i][j];
        }
    }
    cout<<"two dimensional array elements are :"<<endl;
    for (i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
        {
            cout<<"d["<<i<<"]["<<j<<"] :"<<d[i][j]<<endl;
            
        }
    }
}