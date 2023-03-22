#include<iostream>
using namespace std;

struct employee
{
    int eID;
    char favchar;
    float salary;
};
int main()
{
    struct employee harry;
    harry.eID=1;
    harry.favchar='c';
    harry.salary=12345.34;
    cout<<"eid of harry is "<<harry.eID<<endl;
    cout<<"favchar of harry is "<<harry.favchar<<endl;
    cout<<"salary of harry is "<<harry.salary<<endl;
return 0;
}