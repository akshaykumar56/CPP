#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int d[2][3];  /*declare 2d array*/
	int i,j;      /* take tho variable i(row) and j(colomn)*/ 
	for(i=0;i<2;i++) /* take input from the user*/
	{
		for(j=0;j<3;j++)
		{
			cout<<"enter value for d["<< i <<"]["<< j <<"]: " ;
			cin>>d[i][j];
		}
	}
	cout<<"two dimensional array elements:" <<endl;
	for (i=0;i<2;i++)
	{
		
		for(j=0;j<3;j++)
		{
			cout<<"d["<< i <<"]["<< j <<"]:"<<d[i][j] <<endl;
			}
		}
	return 0;
}
