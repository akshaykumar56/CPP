#include<iostream>
#include<fstream>
 using namespace std;

int main()
{
    ofstream hout("sample80.txt");
cout<<"enter your name ";
string name;
cin>>name;
 hout<<"My name is "<<name;
 hout.close();
return 0;
}