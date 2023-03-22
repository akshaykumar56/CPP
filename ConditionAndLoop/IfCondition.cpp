#include<iostream>

using namespace std;
int main()
{
    int age;

    cout << "tell me your age"<<endl;
    cin>>age;
    if ((age<18) && (age>0))
    {
        cout<<"you cant come to my party"<<endl;
    }
    else if (age>=18)
    {
    cout<<"you are adult and you can come to my party"<<endl;
    }
    else if (age<0)
    {
        cout<<"you are not born yet"<<endl;
    }
}