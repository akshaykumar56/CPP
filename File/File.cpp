#include<iostream>
#include<fstream>
 using namespace std;

int main(){
ofstream out;
out.open("sample2.txt");
out<<"this is me";
out.close();
ifstream in;
string st;
in.open("sample2.txt");
getline(in,st);
cout<<st;
in.close();
return 0;
}