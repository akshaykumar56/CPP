#include<iostream>
#include<fstream>
#include<string>
 using namespace std;

int main(){
ofstream out;
out.open("sample.txt");
out<<"this is me"<<endl;;
out<<"this is also me"<<endl;
out<<"this is not me"<<endl;
out.close();
ifstream in;
string s;
in.open("sample.txt");
while(in.eof()==0)
{
    getline(in,s);
    cout<<s<<endl;
}
return 0;
}