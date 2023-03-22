#include<iostream>
#include<fstream>

using namespace std;

int main(){
    string st="akshay bhai";
    string st2;
    // opening file using constructer and writing it
// ofstream out("sample60.txt");  //write operation
// out<<st;
    // Opening files using constructor and reading it
    ifstream hin("sample61.txt"); // Read operation
    hin>>st2;
    getline(hin, st2);  
    cout<<st2;

    return 0;
}


// the useful classe for working with files in C++ are
// fstreambase
// ifstream-->derived from fstreambase
// ofstream-->derived from fstreambase
// in order to work with files in c++,you have to open it.
// primarly there are two ways to open a file in C++
// 1.using the constructer 
// 2.using the membre function of the class