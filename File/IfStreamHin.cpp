#include<iostream>
#include<fstream>
 using namespace std;

int main()
{
    // ofstream akshay("sample.txt");
    // cout<<"enter your name :";
    // string name;
    // cin>>name;
    //  akshay<<"my name is " + name;
    //  akshay.close();

     ifstream hin("sample.txt");
     string content;
     getline(hin,content);
     cout<<"the content of this file is "<<content;
     hin.close();
return 0;
}