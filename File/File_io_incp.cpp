#include<iostream>
#include<fstream>
/*
the useful classes for working with files in c++ are :
1. fstreambase
2. ifstream-->derived from fstreambase
2. ofstream --> derived from fstreambase
*/
// in order to work with files in c++,you have to open it.Primarly there are two ways to open a file in c++.
// 1.using  the constructor.
// 2.using a membre function open() of the class
 
 using namespace std;

int main(){
string st="akshay bhai jayjya kha hal e tuhade";
string st2;
//opening a file using constructor and write it
ofstream out("sample50.txt");  // write operation
out<<st;
//opening a file using constructor and read it
ifstream in("sample60b.txt");
// in>>st2;
// getline(in,st2);
// getline(in,st2);
// getline(in,st2);
// getline(in,st2);
read(in,st2);
cout<<st2;
return 0;
}