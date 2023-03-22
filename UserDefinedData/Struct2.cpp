#include<iostream>
using namespace std;
typedef struct employee
    {
        int ID;
        char favchar;
        float salary;
    } ep;
    int main()
    {
        ep akshay;
        akshay.ID =1;
        akshay.favchar='s';
        akshay.salary=1234434.2;
        cout<<"the salary of akshay is:"<<akshay.salary<<endl;
        cout<<"the ID of akshay is :"<<akshay.ID<<endl;
        cout<<"the favchar of akshay is :"<<akshay.favchar<<endl;
    return 0;
    }